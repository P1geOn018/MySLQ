#include <iostream>
#include "queue.h" // �����������ͷ�ļ�
#include "stack.h" // ����ջ���ͷ�ļ�

using namespace std;

int main()
{
    cout << "���� Vector ����:" << endl;
    // ���� Vector (�����ڶ�̬����)
    Vector<int> vec(10); // ������ʼ����Ϊ10������
    vec.insert(0, 10);
    vec.insert(1, 20);
    vec.insert(2, 30);
    cout << "��ʼ�� Vector ���" << endl;
    cout << "Vector��0��Ԫ��: " << vec[0] << endl;
    cout << "Vector��1��Ԫ��: " << vec[1] << endl;
    cout << "Vector��2��Ԫ��: " << vec[2] << endl;
    cout << "��ǰVector��С: " << vec.size() << endl;

    // ����Vector���ҹ���
    cout << "\n���� Vector ���ҹ���:" << endl;
    int index = vec.find(20);
    cout << "����Ԫ��20��λ��: " << index << endl;

    // ����Vector���빦��
    cout << "\n���� Vector ���빦��:" << endl;
    vec.insert(3, 5);
    vec.insert(4, 25);
    cout << "����Ԫ�غ�Vector����: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // vec.sort(); // ����
    // cout << "�����Vector����: ";
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;

    // ����ջ
    cout << "\n���� Stack ����:" << endl;
    Stack<char> stack;
    stack.push('A');
    stack.push('B');
    stack.push('C');

    cout << "ջ��Ԫ��: " << stack.top() << endl;
    cout << "����Ԫ��: " << stack.pop() << endl;
    cout << "����Ԫ��: " << stack.pop() << endl;
    cout << "ջ�Ƿ�Ϊ��: " << (stack.empty() ? "��" : "��") << endl;
    stack.pop(); // �������һ��Ԫ��
    cout << "��������Ԫ�غ�ջ�Ƿ�Ϊ��: " << (stack.empty() ? "��" : "��") << endl;

    // ��������
    cout << "\n���� List ����:" << endl;
    List<int> list;
    list.insertAsFirst(1);
    list.insertAsLast(2);
    list.insertAsLast(3);
    cout << "��ʼ�� List ���" << endl;
    cout << "List��С: " << list.size() << endl;
    cout << "List��һ��Ԫ��: " << list.first()->data << endl;
    cout << "List���һ��Ԫ��: " << list.last()->data << endl;

    // ����List���ҹ���
    cout << "\n���� List ���ҹ���:" << endl;
    ListNode<int> *node = list.find(2);
    if (node)
    {
        cout << "�ҵ�Ԫ��2" << endl;
    }
    else
    {
        cout << "δ�ҵ�Ԫ��2" << endl;
    }

    // ���Զ���
    cout << "\n���� Queue ����:" << endl;
    Queue<int> queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    cout << "��ʼ�� Queue ���" << endl;
    cout << "����Ԫ��: " << queue.front() << endl;
    cout << "����Ԫ��: " << queue.dequeue() << endl;
    cout << "����Ԫ��: " << queue.dequeue() << endl;
    cout << "�����Ƿ�Ϊ��: " << (queue.empty() ? "��" : "��") << endl;

    // ����쳲���������
    cout << "\n���� Fibonacci ����:" << endl;
    Fib fib(100);
    cout << "������100�����쳲�������: " << fib.get() << endl;
    cout << "��һ��쳲�������: " << fib.next() << endl;
    cout << "����һ��쳲�������: " << fib.next() << endl;

    cout << "\n���в������!" << endl;

    return 0;
}