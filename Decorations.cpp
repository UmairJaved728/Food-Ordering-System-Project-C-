#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
    /*
    system("pause");
    Sleep(500);
    cout << "\n\n\n\n";

    cout<<"\t\t\t\t%%      %%      \n";
    cout<<"\t\t\t\t%%      %%      \n";
    cout<<"\t\t\t\t%%      %%  %%%%%%%  %%       %%%%%%   %%%%%%  %%%%  %%%%  %%%%%%%     \n";
    cout<<"\t\t\t\t%%  %%  %%  %%       %%       %%       %%  %%  %%  %%% %%  %%          \n";
    cout<<"\t\t\t\t%%  %%  %%  %%%%%    %%       %%       %%  %%  %%  %%% %%  %%%%%       \n";
    cout<<"\t\t\t\t%%  %%  %%  %%       %%       %%       %%  %%  %%      %%  %%          \n";
    cout<<"\t\t\t\t%%%%%%%%%%  %%%%%%%  %%%%%%%  %%%%%%   %%%%%%  %%      %%  %%%%%%%     \n";

    Sleep(1000);
    cout << "\n\n";

    cout<<"\t\t\t\t\t\t\t\t   %%%%%%%%%%  %%%%%%%%   \n";
    cout<<"\t\t\t\t\t\t\t\t       %%      %%    %%   \n";
    cout<<"\t\t\t\t\t\t\t\t       %%      %% %% %%   \n";
    cout<<"\t\t\t\t\t\t\t\t       %%      %%    %%   \n";
    cout<<"\t\t\t\t\t\t\t\t       %%      %%%%%%%%   \n";

    Sleep(1000);
    cout << "\n\n";

    cout << "\t\t\t\t\t\t\t\t\t\t   %%%%%%%%  %%%%%%%%%%  %%%%%%%%%%  %%%%%%%%%%%%  \n";
    cout << "\t\t\t\t\t\t\t\t\t\t   %%        %%      %%  %%      %%    %%      %%  \n";
    cout << "\t\t\t\t\t\t\t\t\t\t   %%        %%      %%  %%      %%    %%      %%  \n";
    cout << "\t\t\t\t\t\t\t\t\t\t   %%%%%%    %%  %%  %%  %%  %%  %%    %%      %%  \n";
    cout << "\t\t\t\t\t\t\t\t\t\t   %%        %%      %%  %%      %%    %%      %%  \n";
    cout << "\t\t\t\t\t\t\t\t\t\t   %%        %%      %%  %%      %%    %%      %%  \n";
    cout << "\t\t\t\t\t\t\t\t\t\t   %%        %%%%%%%%%%  %%%%%%%%%%  %%%%%%%%%%%%  \n";


    Sleep(1000);
    cout << "\n\n";

    cout << "\t\t\t\t %%%%%%%%%%  %%%%%%%  %%%%%%%%%%%  %%%%%%%  %%%%%%%  %%%%%%%%  %%%%      %%    %%%%%%%%  \n";
    cout << "\t\t\t\t %%      %%  %%   %%    %%     %%  %%       %%   %%     %%     %% %%     %%    %%        \n";
    cout << "\t\t\t\t %%      %%  %%   %%    %%     %%  %%       %%   %%     %%     %%  %%    %%    %%        \n";
    cout << "\t\t\t\t %%  %%  %%  %%%%%%%    %%     %%  %%%%     %%%%%%%     %%     %%   %%   %%    %% %%%%%  \n";
    cout << "\t\t\t\t %%      %%  %%%%       %%     %%  %%       %%%%        %%     %%    %%  %%    %% %% %%  \n";
    cout << "\t\t\t\t %%      %%  %% %%      %%     %%  %%       %% %%       %%     %%     %% %%    %%    %%  \n";
    cout << "\t\t\t\t %%%%%%%%%%  %%  %%%  %%%%%%%%%%%  %%%%%%%  %%  %%%  %%%%%%%%  %%      %%%%    %%%%%%%%  \n";

    Sleep(1000);
    cout << "\n\n";

    cout << "\t\t\t\t\t\t\t\t %%%%%%%  %%      %%  %%%%%%%  %%%%%%%%%%  %%%%%%%  %%%%     %%%%          \n";
    cout << "\t\t\t\t\t\t\t\t %%        %%    %%   %%           %%      %%       %% %%   %% %%          \n";
    cout << "\t\t\t\t\t\t\t\t %%         %%  %%    %%           %%      %%       %%  %% %%  %%          \n";
    cout << "\t\t\t\t\t\t\t\t %%%%%%%     %%%%     %%%%%%%      %%      %%%%     %%   %%%   %%          \n";
    cout << "\t\t\t\t\t\t\t\t      %%      %%           %%      %%      %%       %%         %%          \n";
    cout << "\t\t\t\t\t\t\t\t      %%      %%           %%      %%      %%       %%         %%          \n";
    cout << "\t\t\t\t\t\t\t\t %%%%%%%      %%      %%%%%%%      %%      %%%%%%%  %%         %%          \n";

    Sleep(500);
    cout << "\n\n\n";

    int i; 
    for(i=5; i>=0; i--)
    {
        cout << "\r\t\t\t\t\t\t\t\t  Starting in " << i << " seconds.";
        Sleep(1000);  
    }
    */
    /*
    string str = "";
    str += "\n\n\n";

    str += "   |M||M|      |M||M|           |A|           |I||I||I||I||I|  |N||N|        |N|      |M||M|      |M||M|  |E||E||E||E|  |N||N|        |N|  |U|         |U|\n";
    str += "   |M| |M|    |M| |M|         |A| |A|               |I|        |N| |N|       |N|      |M| |M|    |M| |M|  |E|           |N| |N|       |N|  |U|         |U|\n";
    str += "   |M|  |M|  |M|  |M|        |A|   |A|              |I|        |N|  |N|      |N|      |M|  |M|  |M|  |M|  |E|           |N|  |N|      |N|  |U|         |U|\n";
    str += "   |M|   |M||M|   |M|       |A|     |A|             |I|        |N|   |N|     |N|      |M|   |M||M|   |M|  |E|           |N|   |N|     |N|  |U|         |U|\n";
    str += "   |M|    |M|     |M|      |A|       |A|            |I|        |N|    |N|    |N|      |M|    |M|     |M|  |E||E||E|     |N|    |N|    |N|  |U|         |U|\n";
    str += "   |M|            |M|     |A||A||A||A||A|           |I|        |N|     |N|   |N|      |M|            |M|  |E|           |N|     |N|   |N|  |U|         |U|\n";
    str += "   |M|            |M|    |A|           |A|          |I|        |N|      |N|  |N|      |M|            |M|  |E|           |N|      |N|  |N|  |U|         |U|\n";
    str += "   |M|            |M|   |A|             |A|         |I|        |N|       |N| |N|      |M|            |M|  |E|           |N|       |N| |N|  |U|         |U|\n";
    str += "   |M|            |M|  |A|               |A|  |I||I||I||I||I|  |N|        |N||N|      |M|            |M|  |E||E||E||E|  |N|        |N||N|  |U||U||U||U||U|\n";

    str += "   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << str;
    */

    /*
    string str = "";
    str += "\n\n\n";

    str += "\t\t  |H|         |H|  |U|         |U|  |N||N|        |N|      |G||G||G|       |R||R||R|    |Y|            |Y|     |?||?||?|                     \n";
    str += "\t\t  |H|         |H|  |U|         |U|  |N| |N|       |N|    |G|       |G|   |R|       |R|    |Y|        |Y|      |?|     |?|    \n";
    str += "\t\t  |H|         |H|  |U|         |U|  |N|  |N|      |N|  |G|         |G|  |R|        |R|      |Y|    |Y|       |?|       |?|   \n";
    str += "\t\t  |H|         |H|  |U|         |U|  |N|   |N|     |N|  |G|              |R|      |R|          |Y||Y|          |?|     |?|    \n";
    str += "\t\t  |H||H||H||H||H|  |U|         |U|  |N|    |N|    |N|  |G|              |R|    |R|              |Y|                  |?|     \n";
    str += "\t\t  |H|         |H|  |U|         |U|  |N|     |N|   |N|  |G|   |G||G||G|  |R|  |R|                |Y|                 |?|      \n";
    str += "\t\t  |H|         |H|  |U|         |U|  |N|      |N|  |N|  |G|   |G|   |G|  |R|    |R|              |Y|                |?|       \n";
    str += "\t\t  |H|         |H|  |U|         |U|  |N|       |N| |N|    |G|       |G|  |R|      |R|            |Y|                          \n";
    str += "\t\t  |H|         |H|  |U||U||U||U||U|  |N|        |N||N|      |G||G||G|    |R|        |R|          |Y|                |?|       \n";
    str += "\n";
    str += "\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   \n";

    cout << str;
    */
    /*
    string str = "";
    str += "\n\n\n";

    str += "\t\t   |S||S||S||S|  |E||E||E||E|  |L|           |L|               |N||N|        |N|  |O||O||O||O||O|  |W|             |W|  \n";
    str += "\t\t   |S|           |E|           |L|           |L|               |N| |N|       |N|  |O|         |O|  |W|             |W|  \n";
    str += "\t\t   |S|           |E|           |L|           |L|               |N|  |N|      |N|  |O|         |O|  |W|             |W|  \n";
    str += "\t\t   |S|           |E|           |L|           |L|               |N|   |N|     |N|  |O|         |O|  |W|             |W|  \n";
    str += "\t\t   |S||S||S||S|  |E||E||E|     |L|           |L|               |N|    |N|    |N|  |O|   |O|   |O|  |W|     |W|     |W|  \n";
    str += "\t\t            |S|  |E|           |L|           |L|               |N|     |N|   |N|  |O|         |O|  |W|   |W| |W|   |W|  \n";
    str += "\t\t            |S|  |E|           |L|           |L|               |N|      |N|  |N|  |O|         |O|  |W|  |W|   |W|  |W|  \n";
    str += "\t\t            |S|  |E|           |L|           |L|               |N|       |N| |N|  |O|         |O|  |W| |W|     |W| |W|  \n";
    str += "\t\t   |S||S||S||S|  |E||E||E||E|  |L||L||L||L|  |L||L||L||L|      |N|        |N||N|  |O||O||O||O||O|  |W||W|       |W||W|  \n";
    str += "\n";
    str += "\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   \n";
    cout << str;
    */
    /*
    string str = "";
    str += "\n\n\n";

    str += "\t\t                                                    \n";
    str += "\t\t                                                    \n";
    str += "\t\t                                                    \n";
    str += "\t\t                                                    \n";
    str += "\t\t                                                    \n";
    str += "\t\t                                                    \n";
    str += "\t\t                                                    \n";
    str += "\t\t                                                    \n";
    str += "\t\t                                                    \n";
    str += "\n";
    str += "\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   \n";
    cout << str;
    */
    /*
    string str = "";
    str += "\n\n\n";

    str += "\t  |O||O||O||O||O|     |R||R||R|    |D||D||D||D||D|  |E||E||E||E|     |R||R||R|        |N||N|        |N|  |O||O||O||O||O|  |W|             |W| \n";
    str += "\t  |O|         |O|   |R|       |R|     |D|      |D|  |E|            |R|       |R|      |N| |N|       |N|  |O|         |O|  |W|             |W| \n";
    str += "\t  |O|         |O|  |R|        |R|     |D|      |D|  |E|           |R|        |R|      |N|  |N|      |N|  |O|         |O|  |W|             |W| \n";
    str += "\t  |O|         |O|  |R|      |R|       |D|      |D|  |E|           |R|      |R|        |N|   |N|     |N|  |O|         |O|  |W|             |W| \n";
    str += "\t  |O|   |O|   |O|  |R|    |R|         |D|      |D|  |E||E||E|     |R|    |R|          |N|    |N|    |N|  |O|   |O|   |O|  |W|     |W|     |W| \n";
    str += "\t  |O|         |O|  |R|  |R|           |D|      |D|  |E|           |R|  |R|            |N|     |N|   |N|  |O|         |O|  |W|   |W| |W|   |W| \n";
    str += "\t  |O|         |O|  |R|    |R|         |D|      |D|  |E|           |R|    |R|          |N|      |N|  |N|  |O|         |O|  |W|  |W|   |W|  |W| \n";
    str += "\t  |O|         |O|  |R|      |R|       |D|      |D|  |E|           |R|      |R|        |N|       |N| |N|  |O|         |O|  |W| |W|     |W| |W| \n";
    str += "\t  |O||O||O||O||O|  |R|        |R|  |D||D||D||D||D|  |E||E||E||E|  |R|        |R|      |N|        |N||N|  |O||O||O||O||O|  |W||W|       |W||W| \n";
    str += "\n";
    str += "\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << str;
    */
    /*
    string str = "";
    str += "\n\n\n";

    str += "\t\t\t\t\t   |C||C||C||C|           |A|              |R||R||R|    |T||T||T||T||T| \n";
    str += "\t\t\t\t\t   |C|                  |A| |A|          |R|       |R|        |T|       \n";
    str += "\t\t\t\t\t   |C|                 |A|   |A|        |R|        |R|        |T|       \n";
    str += "\t\t\t\t\t   |C|                |A|     |A|       |R|      |R|          |T|       \n";
    str += "\t\t\t\t\t   |C|               |A|       |A|      |R|    |R|            |T|       \n";
    str += "\t\t\t\t\t   |C|              |A||A||A||A||A|     |R|  |R|              |T|       \n";
    str += "\t\t\t\t\t   |C|             |A|           |A|    |R|    |R|            |T|       \n";
    str += "\t\t\t\t\t   |C|            |A|             |A|   |R|      |R|          |T|       \n";
    str += "\t\t\t\t\t   |C||C||C||C|  |A|               |A|  |R|        |R|        |T|       \n";
    str += "\n";
    str += "\t\t\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << str;
    */
    /*
    string str = "";
    str += "\n\n\n";

    str += "\t\t\t     |W|             |W|           |A|           |L|           |L|             |E||E||E||E|  |T||T||T||T||T| \n";
    str += "\t\t\t     |W|             |W|         |A| |A|         |L|           |L|             |E|                 |T|       \n";
    str += "\t\t\t     |W|             |W|        |A|   |A|        |L|           |L|             |E|                 |T|       \n";
    str += "\t\t\t     |W|             |W|       |A|     |A|       |L|           |L|             |E|                 |T|       \n";
    str += "\t\t\t     |W|     |W|     |W|      |A|       |A|      |L|           |L|             |E||E||E|           |T|       \n";
    str += "\t\t\t     |W|   |W| |W|   |W|     |A||A||A||A||A|     |L|           |L|             |E|                 |T|       \n";
    str += "\t\t\t     |W|  |W|   |W|  |W|    |A|           |A|    |L|           |L|             |E|                 |T|       \n";
    str += "\t\t\t     |W| |W|     |W| |W|   |A|             |A|   |L|           |L|             |E|                 |T|       \n";
    str += "\t\t\t     |W||W|       |W||W|  |A|               |A|  |L||L||L||L|  |L||L||L||L|    |E||E||E||E|        |T|       \n";
    str += "\n";
    str += "\t\t\t     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << str;
    */

    string str = "";
    str += "\n\n\n";

    str += "\t   |C||C||C||C|  |O||O||O||O||O|  |N||N|        |N|  |F||F||F||F|  |I||I||I||I||I|     |R||R||R|    |M||M|      |M||M|     |?||?||?|   \n";
    str += "\t   |C|           |O|         |O|  |N| |N|       |N|  |F|                 |I|         |R|       |R|  |M| |M|    |M| |M|    |?|     |?|  \n";
    str += "\t   |C|           |O|         |O|  |N|  |N|      |N|  |F|                 |I|        |R|        |R|  |M|  |M|  |M|  |M|   |?|       |?| \n";
    str += "\t   |C|           |O|         |O|  |N|   |N|     |N|  |F|                 |I|        |R|      |R|    |M|   |M||M|   |M|    |?|     |?|  \n";
    str += "\t   |C|           |O|   |O|   |O|  |N|    |N|    |N|  |F||F||F|           |I|        |R|    |R|      |M|    |M|     |M|           |?|   \n";
    str += "\t   |C|           |O|         |O|  |N|     |N|   |N|  |F|                 |I|        |R|  |R|        |M|            |M|          |?|    \n";
    str += "\t   |C|           |O|         |O|  |N|      |N|  |N|  |F|                 |I|        |R|    |R|      |M|            |M|         |?|     \n";
    str += "\t   |C|           |O|         |O|  |N|       |N| |N|  |F|                 |I|        |R|      |R|    |M|            |M|                 \n";
    str += "\t   |C||C||C||C|  |O||O||O||O||O|  |N|        |N||N|  |F|           |I||I||I||I||I|  |R|        |R|  |M|            |M|         |?|     \n";
    str += "\n";
    str += "\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << str;

    return 0;
}

