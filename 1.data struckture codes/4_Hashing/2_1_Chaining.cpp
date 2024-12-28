#include <bits/stdc++.h>
using namespace std;

const int TABLE_SIZE = 10; // Hash table size

// Hash function
int hashFunction(int key)
{
    return key % TABLE_SIZE;
}

class ChainingHashTable
{
    private:
        vector<list<int>> table;

    public:
        ChainingHashTable()
        {
            table.resize(TABLE_SIZE);
        }

        void insert(int key)
        {
            int index = hashFunction(key);
            table[index].push_back(key);
        }

        void display()
        {
            cout << "\nChaining (Open Hashing):\n";
            for (int i = 0; i < TABLE_SIZE; i++)
            {
                cout << i << ": ";
                for (auto key : table[i])
                {
                    cout << key << " -> ";
                }
                cout << "NULL\n";
            }
        }
};


int main()
{
    ChainingHashTable chainingTable;
    // 10
    chainingTable.insert(15); // 5
    chainingTable.insert(25); // 5
    chainingTable.insert(35); // 5
    chainingTable.insert(5); // 5
    chainingTable.display();
}
