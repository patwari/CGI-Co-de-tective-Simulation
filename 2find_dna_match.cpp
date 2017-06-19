/************************************************************************************************/
/*					PROBLEM INSTRUCTIONS					*/
/************************************************************************************************/

/*
1. You found blood stains on the knife and are trying to match the DNA with Carl's
to ascertain whether the knife is indeed the murder weapon.
2. Two arrays A and B, of size 100 and 200 respectively, have been initialized
and passed onto the 'find_dna_match' function.
3. All numbers are greater than 3.
4. The function is required to calculate the probability that (a^b)>(b^a)
where a is randomly picked from A and b is randomly picked from B.
('a' raised to the power 'b' is greater than 'b' raised to the power 'a').
5. For example, if A[2]={6,9} and B[3]={4,7,11}, then probability that (a^b)>(b^a) is 0.50.
6. The probability is a float value (<1) and has to be returned to the main function
which converts it to a percentage and prints upto 2 decimal places.
7. The resulting percentage is the percent match in the DNA.
*/

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;
float find_dna_match(int *, int *);
int main()
{
	int A[100]={284,287,178,116,294,236,287,193,250,122,63,128,291,260,264,227,241,127,173,137,12,69,268,130,183,231,63,224,68,236,30,103,223,259,270,268,194,257,212,143,130,274,22,120,285,38,99,225,216,271,114,227,92,81,57,274,63,171,197,182,106,226,285,28,237,6,47,130,14,258,25,196,283,46,15,268,135,165,244,51,188,109,277,279,189,85,4,252,255,200,133,61,177,169,140,113,227,187,295,240};
	int B[200]={796,1571,435,1379,468,2602,1098,903,1318,493,653,2757,302,1281,1287,1442,2866,690,1445,1620,2441,730,2032,1118,2098,2772,2482,2676,2710,1928,568,857,498,1354,2587,966,1307,684,2220,2625,1529,2872,2733,1830,1504,1020,271,1369,1709,1716,341,1150,2797,2724,2619,2246,2847,2452,1922,2556,1380,2489,765,2229,842,351,194,2501,1035,2765,2125,2915,2988,1857,1744,1492,228,2366,2860,1937,1433,552,438,1229,276,408,475,122,2859,2396,30,1238,2236,794,819,429,1144,1012,2929,2530,777,2405,2444,764,1614,1539,2607,1841,905,2819,1129,2689,370,1918,918,997,2325,1744,1471,2184,1491,1500,773,726,2645,1591,1506,1140,2955,1787,670,1083,1543,465,2198,508,2356,1805,2349,612,1623,829,300,2344,2747,1569,341,2423,312,1811,1606,1802,662,2731,2879,306,1321,1737,1445,1627,523,2466,2709,2417,283,2259,2925,2638,1063,2625,601,37,453,900,2380,551,2469,72,2974,132,1882,1931,1934,2895,1661,2164,200,2982,900,1997,1960,1774,1814,1669,1191,2096,927,1467,2085,2341};

	float prob=find_dna_match(A,B);
	prob=prob*100;
	cout << std::fixed << std::setprecision( 2 ) << prob;
	return 0;
}
float find_dna_match(int A[100], int B[200])
{
	float probability;

	int sizeA = 100;
	int sizeB = 200;

	sort(A, A+sizeA);
	sort(B, B+sizeB);

	int j=0;
	int count_larger = 0;
    for(int i=0; i<sizeA; i++)
    {
        while(A[i] >= B[j] && j<sizeB)
            j++;
        count_larger += sizeB-j;
    }

    probability = (float)count_larger/(sizeA*sizeB);


	return probability;
}
