#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {

    // 한명이 같은 사람 여러번 신고한 중복값 제거
    report.erase(unique(report.begin(), report.end()), report.end());
    
    // report_map : <신고당한자, 신고한자>
    multimap<string, string> report_map;
    // count_reported : user가 신고당한 횟수 count
    map<string, int> count_reported;

    int index = 0;
    string reporter = "";
    string reported = "";
    for (string r : report)
    {
        // 신고자, 신고당한자 분리
        index = r.find(' ');
        reporter = r.substr(0, index);
        reported = r.substr(index + 1);

        // <신고당한자, 신고한자> 형태로 insert
        report_map.insert(pair<string, string>(reported, reporter));

        // 신고당한자의 count_reported++
        count_reported[reported]++;
    }

    vector<int> answer(id_list.size(), 0);

    for (auto iter = count_reported.begin(); iter != count_reported.end(); iter++)
    {
        if (iter->second >= k) // k번이상 신고당했으면
        {            
            auto range = report_map.equal_range(iter->first);
            for (auto itr = range.first; itr != range.second; itr++) {
                // itr->second이 신고자의 아이디
                auto it2 = find_if(id_list.begin(), id_list.end(), [itr](string s) {return (s==itr->second) ? true : false; });
                // 신고자의 answer++;
                answer[it2-id_list.begin()]++;
            }
        }
    }
    return answer;
}

void main()
{
    vector<string> list = { "muzi", "frodo", "apeach", "neo" };
    vector<string> rep = { "muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi" };
    
    vector<int> output = solution(list, rep, 2);

    for (int i : output)
    {
        cout << i << ' ';
    }
}