#include <iostream>
#include <queue>
using namespace std;
void interleaveQueue(queue<int> &q)
{
    if (q.empty())
        return;
    int n = q.size();
    int k = n / 2;
    queue<int> q2;

    int count = 0;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;
        if (count == k)
        {
            break;
        }
    }

    while (!q.empty() && !q2.empty())
    {
        int temp2 = q2.front();
        q2.pop();

        q.push(temp2);

        int temp3 = q.front();
        q.pop();
        q.push(temp3);
    }

    if (n & 1)
    {
        int element = q.front();
        q.pop();
        q.push(element);
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    // q.push(90);

    interleaveQueue(q);

    cout << "printing" << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}