// Solved

/************************************************************************************************/
/*					PROBLEM INSTRUCTIONS					*/
/************************************************************************************************/

/*
1. The array 'message' contains the message from the notebook.
2. To decode it, you are required to compute the length of each word (delimited by a space).
3. Next, extract the character at the (length%4)th index of the word
(ONLY if it is a valid english upper or lower-case character. Ascii:- 65-90, 97-122).
Length is the total number of characters in the word.
4. Length of each word is always greater than 3 in the given message.
5. The indices of characters of the word range from 0 - (length-1).
6. The decoded message is to be saved in an array actual_msg which is already declared.
7. Actual_msg has to be returned to the main function where it is printed.
8. You are required to populate the actual_msg array with the decoded message.
9. Example String:
TDZRDAYp op=zzu mmH6lrKocBn QMebVZcfOZZvJq sUbiziJkaTWA z;VvsjwYWGBzk v&SYWjxzu gIdtKzr
Output: Test
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

char* decode(char []);
int main()
{
	char message[10000];char *actual_msg;
	strcpy(message, "gAZRDAYpzopkzzuzwmmHclrKocBnzzQMW VZc?OZZvJqnwUbiziJkaTWAUBzpSlElyzLdezuz K9xmBozKzsVvsjwYW zrAqvzSYWjxzuPogIdyKzrzmjGbzz BpPrzDMpTzzIZRYGxYjndieIzMP De*wRjppmuzFUBGoKzmzwznXBXaUzhOzJizzXJPBDeyXfE zp,PIzgKkEWLdfcmLwNzFUzAyR <TKaArhBSUDCQZFuwizHelbbyubwEqQSBzkuKYvzeqWu g!BLLfonEmzfjdUrnNSzHzouqYkMS rabCHEqmBdSzKnsBZyLpxzdsVBzZLKrCGQwGM sNO&mYqzRPzVEYuzIIazZdfQgdazjfNcsTeedSH ZQVnCurKSKzwpmzQLuAqAziTwLxPKki s!LuqCxJMZFtDXKOR Jz7zYiSzkCGLuCWgsRdBVCyPGVRMzLJihgDxMVzwPzzJzW zgPuUNBSzSzszzYCLzAPj Lzq*ATZqayI ?vugOECGzczUfsMvcbyZPBZz .QIiBUznsjjuhBUEWswcnWCd zHe(HzGPDzdzmzG gVc;lzzLFvNacXDbtti pRq:izdhfrTARvddZhaMuGp Ou&xImeSzvAmzzXNsQznlzFYzRLzGMaNHzKHFgZXbSBGrQ ekNSbScHenfc 1pHzrOzzasxslvbBHJzrXeYb D>ugAxTzTDFoZ ,VPSxRZylINVYpZqsZcW TIlfOaElEzzMeoVDmGLATzhmSXEmoVKW wt#zpNYPMz &pfxtfIVSvzjzRVMzdcYUEmJSCZWzLPWAuMlXUGbHfIy .RznjUsTVCVoQurzRkRzzijcHrFQpCgATzgu 3FQdlaVzGgLPBzqlyxzEFPGdISHgEiCSfSnX kqhvGaRwJQldUrlSztzZzbAZlf zuz.eKDXIejwnzhPTWAzjtAIQbAbSgKiYfEDhIz Bl'ARzLhzj bXXeXySvIsUgoPTwjBYdeidvMhzdOrs O7xzGHZPznnfuGczzsFeaaXfNsOzcyQiGFMFM 6RzjMxJixtfZzLqx LmJ<DrAAwFFcJAlIbpFcVCzATwEKtzdwHmpCzpDXmIr 8vcQBKzvgWPzzRTpuHxzxzreuPPuyCvZyzcr 4MUtgpKszwzRSwRKZDRiyPktjiOR PKr6DzQGOnuNwNCNPzJaBHhlsWSyzjlolzQhran hBImMNtzWZaVH NVoLvDpbhIrUzQ Ezg=zRzbKAxzbLzdQqx AJL1JCBISAMgzSH iAg,UFjpirg HzM-DVVEzzxbLzuLSzlKLHzIiMq Tl'ryKuTXqjxfQ CoRcpzfwtofFzLqiwizmsRGIzpFfx msB!zqYxeRdPOySEgHmDtzUzfTgcyzzlUYh FdkOFszDDZ K:eDayvDJZzAvvdPTQvzNXDzUvpPyOqASzEkQroRQ M;uTYCPsPzvcsiYHzgxzqPzbXSVaz sdeABhHlwfzXzMpzdTRBCazd h=WIUGppchqPhZESxziCICfTU uByTigqitoViWCXgjqcuovzqDzTOqAedtzDZHtHAhzavWxZ oB2cwKYrglyVdz *tntmulRWSEnPzlDzzzU DJX<zATUNGFAzjndABvFgCz $kzMNPIXgBnzNAdTFeKpPnhQaexd 7ypmCCBCZzENwRFX tgoIzzZABOzHzuxPhz aC%yyimHnJdqDPhDbE -cvFviCCNtMfnqddWNkCPLkKTPNuUcUS XFFRIDCUiqCKZRPCTzNviYKwTWWziahxgV 2YJAzzvBQMQSXhYS zJ'tXZZyGXzzzImzAdzvegznyWzOahxDjqoGPFwWUY az+byeUcQUNGkzVRNKMoAs xjiKHGuazI Qmz>CpyJYzWbdYnXQzBYSkozkmWQFzXVJkGMYFNqzzXEtCz z8jFGMplcFizUvJECNUzzKSvZWgTjpkDHzIOzpzGu ncHLzUXTocfb B.FcupgCHoIfe Wg-zOjadDxojXzQRTVOwPDcJDORasQKHwmeDzC rSdPmVYycgukbU zcD)TLFzIswDLybzplzwznU s8FScroKmrzxx hlA:bZKPLcL Yvc)JizdXPfJyJGnqEzcEDJWNYbhzICmDfuELVhzzSd bTKfaecdnqjEXWYXR zo4WrRDRnNuGZTMdrmNROsHxozLEvUONIL UzI=duyCOKzFwcWKzzzHtDM S>YVUPksYczKaWYktVzzdbpyaorzAzlLOBacQISakolICBsvX sqwhOlakdwzoKzNfeVxLydoyfhjZEyipofgCOEmrAFz ZlieyzHoHnnezzDXzmMOPkIzovMpskkSTQO !VymAlXzFzrzEvfLfoazbnHRzjdrzjBewzXwlgPiyGOv GzX<rqzqIpX +TztHXQEAoTimRwzLagdpLSgzBgS jpzWacfqzfzrUGA 8EaShWVrussaCRhlyAszzVMytahNgzNSdgzICrAwbsUeBBNr N9zRRMrqRzWzqrCTAECAsekEGeGTz jaeszqkLHOZzwQaPQzKINotRuzPFq O#SsQgiArhGIL dSb3zkKIzzuydrg EC!MjzMYESbPUskzZisJss %zqzzacvzaHCxLzCzBJjluGL Mz>jhLBVhAvPvOiuQf hze+KWdIZLqfzXUCdOXQGLaCZGw u1RUpAWDdzzgV eMEyzzWbzwzyCPafJlwzYouzPRqvzqpIDtWzMewlYXb");
	actual_msg=decode(message);
	cout<<actual_msg;
	return 0;
}
char* decode(char message[10000])
{
	char *actual_msg;

    actual_msg = new char[100];

	//method 1: Splitting a string into tokens
	char *tok;
	tok = strtok(message, " ");
	int index=0;
	while(tok != NULL)
    {
        //cout << tok << endl;
        char ch = tok[strlen(tok)%4];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            actual_msg[index++] = ch;

        tok = strtok(NULL, " ");
    }

	return actual_msg;

	// Method 2: Use String stream on c++ string
	// Method 3: Using Regex iterators on the c++ string
	// Method 0: Iteratively check for space, without the use of any function. Most basic, but handy
}
