//Chrisin Jacob
//CSCI 377 Huffman Coding Project

#include <bits/stdc++.h>
using namespace std;

struct heapnodeminimum { // this will create a huffman node
    char value; // this is will provide one of the input characters
    unsigned frequency;  // this will provide the frequency of the character
    heapnodeminimum *left, *right; // this will give the left and right side child
    heapnodeminimum (char value, unsigned frequency) {
        left = right = NULL;
        this->value = value;
        this->frequency = frequency;
    }
  };

struct cmp { // this will compare the two heap nodes and wil be used in min heap
    bool operator()(heapnodeminimum* l, heapnodeminimum* x){
        return (l->frequency > x->frequency);
    }
 };
 
void print(struct heapnodeminimum* root, string y) //this will print the huffman code (Huffman root)

    {
        if (!root)
            return;
        if (root->value != '$')
            cout << root->value << ": " << y << "\n";
        print(root->left, y + "0");
        print(root->right, y + "1");
        
    }

// The main function that builds a Huffman Tree and print codes by traversing the built Huffman Tree
void HuffmanCodes(char value[], int frequency[], int size){
    struct heapnodeminimum *left, *right, *top;
    // Create a min heap & inserts all characters of data[]
    priority_queue<heapnodeminimum*, vector<heapnodeminimum*>, cmp> minHeap;
     for (int i = 0; i < size; ++i)
        minHeap.push(new heapnodeminimum(value[i], frequency[i]));
    // Iterate while size of heap doesn't become 1
    while (minHeap.size() != 1) {
        left = minHeap.top();
        minHeap.pop();
        right = minHeap.top();
        minHeap.pop();
        top = new heapnodeminimum('$', left->frequency + right->frequency);
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }
    print(minHeap.top(), "");  // Print Huffman codes using the Huffman tree built above
}

int main(){ 
    char val[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };
    int size = sizeof(val) / sizeof(val[0]);
    HuffmanCodes(val, freq, size);
    
    return 0;
}
