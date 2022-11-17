#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {

    // �Ѹ��� ���� ��� ������ �Ű��� �ߺ��� ����
    report.erase(unique(report.begin(), report.end()), report.end());
    
    // report_map : <�Ű������, �Ű�����>
    multimap<string, string> report_map;
    // count_reported : user�� �Ű���� Ƚ�� count
    map<string, int> count_reported;

    int index = 0;
    string reporter = "";
    string reported = "";
    for (string r : report)
    {
        // �Ű���, �Ű������ �и�
        index = r.find(' ');
        reporter = r.substr(0, index);
        reported = r.substr(index + 1);

        // <�Ű������, �Ű�����> ���·� insert
        report_map.insert(pair<string, string>(reported, reporter));

        // �Ű�������� count_reported++
        count_reported[reported]++;
    }

    vector<int> answer(id_list.size(), 0);

    for (auto iter = count_reported.begin(); iter != count_reported.end(); iter++)
    {
        if (iter->second >= k) // k���̻� �Ű��������
        {            
            auto range = report_map.equal_range(iter->first);
            for (auto itr = range.first; itr != range.second; itr++) {
                // itr->second�� �Ű����� ���̵�
                auto it2 = find_if(id_list.begin(), id_list.end(), [itr](string s) {return (s==itr->second) ? true : false; });
                // �Ű����� answer++;
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