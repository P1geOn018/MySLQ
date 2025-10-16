#include <iostream>
#include "vector.h"

using namespace std;

// ��ӡVectorԪ�صĺ���
void printVector(Vector<int> &vec, const string &message)
{
    cout << message << ": ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "=== Vector ���Һ������ܲ��� ===" << endl;

    // ����Vector�������������
    Vector<int> vec;
    vec.insert(0, 6);
    vec.insert(1, 2);
    vec.insert(2, 8);
    vec.insert(3, 4);
    vec.insert(4, 1);
    vec.insert(5, 9);
    vec.insert(6, 3);
    vec.insert(7, 7);
    vec.insert(8, 5);

    printVector(vec, "��ʼVector");

    // ���Բ��ҹ���
    cout << "\n=== ���ҹ��ܲ��� ===" << endl;

    int target = 5;
    int index = vec.find(target);
    if (index >= 0)
    {
        cout << "Ԫ�� " << target << " ��λ�� " << index << " �ҵ�" << endl;
    }
    else
    {
        cout << "Ԫ�� " << target << " δ�ҵ�" << endl;
    }

    target = 10;
    index = vec.find(target);
    if (index >= 0)
    {
        cout << "Ԫ�� " << target << " ��λ�� " << index << " �ҵ�" << endl;
    }
    else
    {
        cout << "Ԫ�� " << target << " δ�ҵ�" << endl;
    }

    // �����������(search����)
    cout << "\n��Vector���������Բ����������..." << endl;
    // Ϊ�˱�������㷨�����⣬�����ֶ�ʵ��һ���򵥵�����
    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = 0; j < vec.size() - 1 - i; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
    printVector(vec, "�����Vector");

    // ��Ϊsearch()Ҫ��Vector�����������Ǽ����Ѿ��ź���
    target = 7;
    index = vec.find(target);
    if (index >= 0)
    {
        cout << "ͨ��find������λ�� " << index << " �ҵ�Ԫ�� " << target << endl;
    }
    else
    {
        cout << "ͨ��find����δ�ҵ�Ԫ�� " << target << endl;
    }

    // ������ָ����Χ�ڵĲ���
    cout << "\n=== ��Χ���Ҳ��� ===" << endl;
    target = 3;
    index = vec.find(target, 0, 4); // ��ǰ4��Ԫ���в���
    if (index >= 0)
    {
        cout << "��ǰ4��Ԫ�����ҵ� " << target << " ��λ�� " << index << endl;
    }
    else
    {
        cout << "��ǰ4��Ԫ����δ�ҵ� " << target << endl;
    }

    // ����������
    cout << "\n=== �����ܲ��� ===" << endl;

    // ����һ���µ�����Vector
    Vector<int> vec2;
    vec2.insert(0, 15);
    vec2.insert(1, 3);
    vec2.insert(2, 9);
    vec2.insert(3, 1);
    vec2.insert(4, 12);
    vec2.insert(5, 6);

    printVector(vec2, "����ǰ��Vector");

    // ʹ��ð�������ֶ�����
    for (int i = 0; i < vec2.size() - 1; i++)
    {
        for (int j = 0; j < vec2.size() - 1 - i; j++)
        {
            if (vec2[j] > vec2[j + 1])
            {
                swap(vec2[j], vec2[j + 1]);
            }
        }
    }
    printVector(vec2, "�ֶ�ð��������Vector");

    // ���Բ�������
    Vector<int> vec3;
    vec3.insert(0, 5);
    vec3.insert(1, 2);
    vec3.insert(2, 8);
    vec3.insert(3, 1);
    vec3.insert(4, 9);
    vec3.insert(5, 3);
    vec3.insert(6, 7);
    vec3.insert(7, 4);

    printVector(vec3, "��������ǰ");

    // �ֶ�������2��5֮���Ԫ�����򣨲�������
    for (int i = 2; i < 6 - 1; i++)
    {
        for (int j = 2; j < 6 - 1 - (i - 2); j++)
        {
            if (vec3[j] > vec3[j + 1])
            {
                swap(vec3[j], vec3[j + 1]);
            }
        }
    }
    printVector(vec3, "������2��5֮��Ԫ�������");

    // ����ȥ�ع���
    cout << "\n=== ȥ�ع��ܲ��� ===" << endl;
    Vector<int> vec4;
    vec4.insert(0, 1);
    vec4.insert(1, 3);
    vec4.insert(2, 3);
    vec4.insert(3, 5);
    vec4.insert(4, 5);
    vec4.insert(5, 5);
    vec4.insert(6, 7);

    printVector(vec4, "ȥ��ǰ");
    int removed = vec4.uniquify();
    printVector(vec4, "����uniquify()ȥ�غ�");
    cout << "�Ƴ��� " << removed << " ���ظ�Ԫ��" << endl;

    return 0;
}