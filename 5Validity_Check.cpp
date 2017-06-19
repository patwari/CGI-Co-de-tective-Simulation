// Solved

/************************************************************************************************/
/*					PROBLEM INSTRUCTIONS					*/
/************************************************************************************************/

// Solution: 32645 is the only undesired number. It's at index=236. Everything except it follows the pattern

/*
1. The ID contains a sequence of numbers that are used to confirm its validity.
2. An array of 500 numbers has been initialized and passed to the function 'validity_check'.
3. All valid numbers follow a certain pattern, the product of all the digits
in all the subsequences of the number are unique. In other words, no two subsequences
can have the same product of the digits.
4. For example, the number '263' follows the pattern. Its subsequences are ({2},{6},{3},
{2,6},{6,3},{2,6,3}) and the set of products of all digits in subsequences are {2,6,3,12,18,54}.
5. Since these products are all unique 263 is a valid number.
6. Please note that {2,3} is not a valid subsequence(it is only a subset) since it's not continous.
7. In function 'validity_check' you are to check if all numbers in the array are valid.
8. If you find an invalid number return it to the main function, else return 0.
9. This number is printed in the main function. If it is non-zero, it means the ID is fake.
*/

#include<iostream>
#include <cstring>
#include <vector>
#include <set>
using namespace std;
int validity_check(int []);
int main()
{
	int num;
	int A[500]= {5736,45368,2567,6429,48537,3526,846,3895,47539,3865,48927,4567,27856,4586,5732,723,42379,36987,48365,3275,8235,35928,5763,4538,47369,6725,2954,28736,3465,5624,973,27684,5936,47625,29567,4259,36784,39528,3729,5629,45367,569,3826,47386,43529,28946,2647,25849,237,45729,28794,38574,39862,34857,43768,253,543,346,925,39685,4789,9485,47283,7398,573,9365,6728,9426,23875,37982,46892,3682,27685,6582,48976,657,42735,38954,39672,26987,9364,39875,37289,35624,42659,6289,24976,32475,38967,38957,35948,27583,938,2493,7829,8743,32587,25634,4387,36742,35269,6837,46579,8437,46295,48569,8925,6527,6794,27645,35472,37542,7394,8752,4978,26784,45879,34986,37892,49752,23847,3786,49853,3596,27984,23879,6942,8693,32854,9683,769,9587,8793,4697,3674,7629,5382,4968,4673,24396,3759,6952,32894,2786,7458,34569,27458,732,39562,36754,25743,34,37685,27589,7654,754,2976,2986,28693,45367,28674,27934,34795,36974,52,43682,47235,4628,27549,29876,24759,3579,6853,7265,23495,6892,7854,8726,34295,857,45738,25834,37945,49826,573,27834,3542,4896,27645,47698,658,4328,2345,46358,4589,25789,658,24763,48263,34589,35247,3825,49356,2847,45289,3489,37582,7986,8253,34956,49267,3954,987,49372,6387,25739,4735,24635,37964,47683,47893,96,38549,7692,6748,32584,5946,43658,25986,5432,24967,49638,6457,36978,25347,7436,32645,5247,8962,2958,48392,3847,8697,45892,27495,47983,48726,29465,43829,259,254,49762,36528,835,9765,8472,4529,4852,7249,39847,6298,867,39467,9385,7396,32857,24635,4526,27694,26938,45296,37958,25679,36825,9576,6387,8764,37854,45829,34982,48952,8254,48697,47529,5932,4732,43259,45397,9346,47395,5738,29465,4753,42956,9476,8976,3694,7964,43725,352,1,34987,47983,27639,35246,39875,34672,37849,32475,36872,36872,49257,27486,93,24537,25974,36258,24657,469,27459,36845,3642,6375,4279,254,47329,5279,975,25978,38954,25978,46827,2473,27538,47869,27364,24956,3978,8594,6958,46728,9673,9253,3529,7354,549,43789,43872,7394,843,6753,8435,3295,7526,6847,28673,9325,2978,4328,43589,45389,48673,34728,73,49278,5987,8365,27583,6829,4739,5382,462,768,8675,35872,9246,9524,34697,9675,9574,35742,34829,49563,9264,25394,39265,25786,25786,63,48296,36284,6829,35786,36857,4329,36254,25673,7582,26984,6584,84,257,26837,385,24967,34527,25743,34876,35879,9672,35287,6927,6975,4628,3482,23849,25643,23487,25396,279,4876,48759,3968,45329,34967,26873,8573,43785,487,6734,28634,627,8627,2568,27853,7396,29453,35249,25893,27694,7532,3865,3476,34786,8347,4257,6489,723,28943,3654,734,6348,5843,35462,48927,35876,5793,27863,8254,36947,352,37586,27843,47238,5472,9452,49253,5284,27956,9543,5423,38496,2398,48397,27894,43829,34825,25496,93,35642,4786,4586,38754,7539,6354,846,39675,7328,34697,26897,682,2538,32,46293,27468,49265,9576,36452,7234,36982};
	num=validity_check(A);
	cout<<num;
	return 0;
}

template<typename T>
void display(T values)
{
    for(auto i=values.begin(); i!=values.end(); i++)
        cout << *i << "\t";
    cout << endl;
}


int validity_check(int numbers[500])
{

    // using naiive approach
    for(int i=0; i<500; i++)
    {
        vector<unsigned short> digits;
        int temp = numbers[i];
        set<int> products;
        while(temp)
        {
                // digits are store backward. But that's not a problem now
            digits.push_back(temp%10);
            products.insert(temp%10);
                // assume each digits is unique, so we don't check for uniqeness right now.
            temp /= 10;
        }
        //display(products);

        int total_num_digits = digits.size();
        for(int left_index=0; left_index<total_num_digits-1; left_index++)
        {
            int product = digits[left_index];
            for(int right_index=left_index+1; right_index<total_num_digits; right_index++)
            {
                product *= digits[right_index];
                if(products.find(product) != products.end())    // if the product already occurs in the set
                    return numbers[i];
                else
                    products.insert(product);
            }

        }
        //display(products);
        digits.clear();
        products.clear();
    }

    return 0;
}
