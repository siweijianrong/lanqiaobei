/*入门训练 A+B问题
问题描述
输入A、B，输出A+B。
说明：在“问题描述”这部分，会给出试题的意思，以及所要求的目标。
输入格式
输入的第一行包括两个整数，由空格分隔，分别表示A、B。
说明：“输入格式”是描述在测试你的程序时，所给的输入一定满足的格式。

做题时你应该假设所给的输入是一定满足输入格式的要求的，所以你不需要对输入的格式进行检查。多余的格式检查可能会适得其反，使用你的程序错误。

在测试的时候，系统会自动将输入数据输入到你的程序中，你不能给任何提示。比如，你在输入的时候提示“请输入A、B”之类的话是不需要的，这些多余的输出会使得你的程序被判定为错误。

输出格式
输出一行，包括一个整数，表示A+B的值。
说明：“输出格式”是要求你的程序在输出结果的时候必须满足的格式。

在输出时，你的程序必须满足这个格式的要求，不能少任何内容，也不能多任何内容。如果你的内容和输出格式要求的不一样，你的程序会被判断为错误，包括你输出了提示信息、中间调试信息、计时或者统计的信息等。

样例输入
12 45
说明：“样例输入”给出了一组满足“输入格式”要求的输入的例子。

这里给出的输入只是可能用来测试你的程序的一个输入，在测试的时候，还会有更多的输入用来测试你的程序。

样例输出
57
说明：“样例输出”给出了一组满足“输出格式”要求的输出的例子。

样例输出中的结果是和样例输入中的是对应的，因此，你可以使用样例的输入输出简单的检查你的程序。

要特别指出的是，能够通过样例输入输出的程序并不一定是正确的程序，在测试的时候，会用很多组数据进行测试，而不局限于样例数据。有可能一个程序通过了样例数据，但测试的时候仍只能得0分，可能因为这个程序只在一些类似样例的特例中正确，而不具有通用性，再测试更多数据时会出现错误。

比如，对于本题，如果你写一个程序不管输入是什么都输入57，则样例数据是对的，但是测试其他数据，哪怕输入是1和2，这个程序也输出57，则对于其他数据这个程序都不正确。

数据规模与约定
-10000 <= A, B <= 10000。
说明：“数据规模与约定”中给出了试题中主要参数的范围。

这个范围对于解题非常重要，不同的数据范围会导致试题需要使用不同的解法来解决。比如本题中给的A、B范围不大，可以使用整型(int)来保存，如果范围更大，超过int的范围，则要考虑其他方法来保存大数。

有一些范围在方便的时候是在“问题描述”中直接给的，所以在做题时不仅要看这个范围，还要注意问题描述。

提示
本题的C++源代码如下：

#include <iostream>
 
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a + b;
    return 0;
}
本题的C源代码如下：

#include <stdio.h>
 
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", a+b);
    return 0;
}
本题的Java源代码如下：

import java.util.*;
 
public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        Integer a = sc.nextInt();
        Integer b = sc.nextInt();
        System.out.println(a + b);
    }
}
说明：要答题，请点击页面上方的“提交此题”按钮，页面将跳转到提交代码的页面，选择好你的编译语言，将你的编写好的代码粘贴到代码框中，再点击“提交答案”即可。

你的答案提交给系统后系统会自动对你的代码进行判分，并跳转到结果的列表里面，你可以直接从列表中看到你提交的代码的状态，一般几秒钟后就可以看到判分的结果。

本题作为第一题，在提示中已经分别给了C++和Java的代码，你可以直接把这个代码拷贝过去作为自己的代码提交。

请特别注意，Java的主类名必须是Main。*/
#include <stdio.h>
 
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", a+b);
    return 0;
}
