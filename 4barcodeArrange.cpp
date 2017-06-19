// Use of __builtin_popcount

// Solved

/************************************************************************************************/
/*					PROBLEM INSTRUCTIONS					*/
/************************************************************************************************/

/*
1. You have to re-arrange the books in the two cupboards in a certain fashion
to unlock the door to the hidden way.
2. All the books seem to have barcode numbers engraved in them.
3. The array 'books' contains the barcode number of each book in binary digits.
4. Two successive characters represent the barcode of any given book.
5. For example, in books[4] = {10,2,33,14}, 10 and 2 represent the barcode of
book 1 (0000101000000010), whereas 33 and 14 represent the barcode of
book 2 (0010000100001110).
6. A book belongs to the first cupboard only if the hamming distance of the barcode of the
book from every other book in the cupboard is at most 10 bits.
7. The 'Hammin
g Distance' between two barcodes is the total number of positions at which
the bits are different. For Eg:-
0101
1010
Distance between the above two (4-bit) numbers is 4.
8. Distance between Book 1 and Book 2 in the first example is 6.
9. You can only arrange the books in the order in which you see them, in other words,
in the order in which they appear in the 'books' array.
10. The arrange function calculates the number of books 'total_count' belonging to the first
cupboard and returns it to the main function, where it is printed.
11. 'total_count' is already declared.
12. By default, the first book goes into the first cupboard.
*/

#include<iostream>
#include <vector>
using namespace std;

int arrange(int []);
int main()
{
	int total_count;
	int books[200]={236,109,178,238,188,218,71,100,229,13,78,168,39,27,47,6,89,138,240,83,125,194,52,215,19,135,140,179,209,151,24,62,132,74,172,192,165,244,38,11,2,243,179,168,16,98,175,232,236,160,60,106,226,240,193,245,120,206,169,201,102,65,8,106,12,53,44,177,42,209,60,171,197,239,84,85,83,131,63,191,36,250,43,134,235,108,124,101,59,166,174,33,103,183,140,115,236,56,164,150,10,224,66,207,81,22,165,36,154,228,227,62,223,142,69,204,251,65,177,182,231,96,88,207,151,100,194,4,156,104,154,166,200,92,245,153,242,155,189,13,0,34,202,224,176,16,45,44,82,222,227,185,190,60,137,214,160,77,218,188,53,245,99,125,209,216,24,196,117,85,209,244,119,29,213,41,45,130,85,127,224,184,58,160,116,67,119,148,16,209,81,69,199,52,67,26,14,91,222,3};
	total_count=arrange(books);

	//cout << sizeof(books)/sizeof(books[0]) << endl;
	cout<<total_count;
	return 0;
}

int arrange(int books[200])
{
	int total_count;
    vector<int> first_cupboard;
    first_cupboard.push_back(books[0]);
    first_cupboard.push_back(books[1]);

	for(int i=2; i<200; i+=2)
    {
        unsigned int temp_count = 0;
        bool greater_than10 = false;
        for(vector<int>::iterator it=first_cupboard.begin(); it!=first_cupboard.end(); it+=2)
        {
            // get only the different bits using xor
            int first_xor = *it^books[i];
            int second_xor = *(it+1)^books[i+1];

            // count number of set bits using much efficient built-in gcc function __builtin_popcount(). This is the hamming distance.
            temp_count = __builtin_popcount(first_xor) + __builtin_popcount(second_xor);
            //cout << temp_count << endl;
            if(temp_count > 10)
            {
                greater_than10 = true;
                break;
            }
        }
        if(greater_than10 == false)     // when hamming distance is atmost 10
        {
            first_cupboard.push_back(books[i]);
            first_cupboard.push_back(books[i+1]);
        }
    }

    for(auto it=first_cupboard.begin(); it!=first_cupboard.end(); it+=2)
    {
        static int ccount = 1;
        //cout << ccount++ << ": " << int(*it) << "\t" << int(*(it+1)) << endl;
    }

    total_count = first_cupboard.size()/2;
	return total_count;
}
