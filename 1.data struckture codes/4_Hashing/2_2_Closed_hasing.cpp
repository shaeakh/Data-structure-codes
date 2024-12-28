#include <bits/stdc++.h>
using namespace std;

int TABLE_SIZE = 6; // Hash table size

// Hash function
int hashFunction(int key)
{
    return key % TABLE_SIZE;
}

// 1. Chaining (Open Hashing)

// 2. Closed Hashing
class ClosedHashTable
{
    private:
        vector<int> table;
        vector<bool> isOccupied; // To track filled buckets

    public:
        ClosedHashTable()   
        {
            table.resize(TABLE_SIZE, -1); // Initialize with -1 (empty)
            isOccupied.resize(TABLE_SIZE, false);
        }

        // Linear Probing
        void linearProbingInsert(int key)
        {
            int index = hashFunction(key);
            int i = 1;
            while (isOccupied[index])
            {
                cout<<"Collision on "<<"index: "<<index<<" for key "<<key<<endl;
                index = (hashFunction(key) + i) % TABLE_SIZE;
                i++;
            }
            table[index] = key;
            isOccupied[index] = true;
        }

        // Quadratic Probing
        void quadraticProbingInsert(int key)
        {
            int index = hashFunction(key);
            int i = 1;
            while (isOccupied[index])
            {
                cout<<"Collision on "<<"index: "<<index<<" for key "<<key<<endl;
                index = (hashFunction(key) + i*i) % TABLE_SIZE;
                i++; // Move to next index
            }
            table[index] = key;
            isOccupied[index] = true;
        }

        // Double Hashing
        int secondHashFunction(int key)
        {
            return 4 - (key % 4 ); 
        }

        void doubleHashingInsert(int key)
        {
            int index = hashFunction(key);
            int h2 = secondHashFunction(key);
            int i = 1;

            while (isOccupied[index])
            {
                printf("index: %d ", index);
                index = (hashFunction(key) + i*h2) % TABLE_SIZE;
                i++;
            }
            table[index] = key;
            isOccupied[index] = true;
        }

        void display()
        {
            cout << "\nClosed Hashing:\n";
            for (int i = 0; i < TABLE_SIZE; i++)
            {
                if (isOccupied[i])
                {
                    cout << i << ": " << table[i] << endl;
                }
                else
                {
                    cout << i << ": NULL\n";
                }
            }
        }
};

// Main function
int main()
{
    // 2.1 Linear Probing
    ClosedHashTable linearProbing;

    linearProbing.linearProbingInsert(24);
    linearProbing.linearProbingInsert(19);
    linearProbing.linearProbingInsert(32);
    linearProbing.linearProbingInsert(31);
    cout << "\nClosed Hashing with Linear Probing:";
    linearProbing.display();

    // 2.2 Quadratic Probing
    ClosedHashTable quadraticProbing = ClosedHashTable();

    quadraticProbing.quadraticProbingInsert(24);
    quadraticProbing.quadraticProbingInsert(19);
    quadraticProbing.quadraticProbingInsert(30);
    cout << "\nClosed Hashing with Quadratic Probing:";
    quadraticProbing.display();

    // 2.3 Double Hashing
    ClosedHashTable doubleHashing = ClosedHashTable();
    TABLE_SIZE = 7;
    doubleHashing.doubleHashingInsert(24);
    doubleHashing.doubleHashingInsert(20);
    doubleHashing.doubleHashingInsert(17);
    cout << "\nClosed Hashing with Double Hashing:";
    doubleHashing.display();

    return 0;
}
