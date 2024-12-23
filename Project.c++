#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

void Say_Hello_With_C()
{
    string Name;
    cin >> Name;

    cout << "Hello, " << Name;
}

void Basic_Data_Types()
{
    int A; long long B; char C; float D; double E;
    cin >> A >> B >> C >> D >> E;

    cout << A << "\n";
    cout << B << "\n";
    cout << C << "\n";
    cout << D << "\n";
    cout << E << "\n";
}

void Simple_Calculator()
{
    long long Num1 , Num2;
    cin >> Num1 >> Num2;

    cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << "\n";
    cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << "\n";
    cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << "\n";
}

void Difference()
{
    long long A , B , C , D;
    cin >> A >> B >> C >> D;

    cout << "Difference = " <<  (A * B) - (C * D);
}

void Area_of_a_Circle()
{
    double R , X = 3.141592653 , Area;
    cin >> R;
    Area = X * pow(R,2);
    cout << fixed << setprecision(9) << Area ;
}

void Digits_Summation()
{
    long long N , M;
    cin >> N >> M;
    cout << (N % 10) + (M % 10);
}

void Summation_from_1_to_N()
{
    long long X , Result = 0;
    cin >> X;
    Result = (X *( X + 1)) / 2;
    cout << Result;
}

void Two_Numbers()
{
    float A , B;
    cin >> A >> B;
    cout << "floor " << A << " / " << B << " = " << floor(A / B) << "\n";
    cout << "ceil " << A << " / " << B << " = " << ceil(A / B) << "\n";
    cout << "round " << A << " / " << B << " = " << round(A / B) << "\n";
}

void Welcome_for_you_with_Conditions()
{
    short A , B;
    cin >> A >> B;
    if(A >= B) cout << "Yes";
    else cout << "No";
}

void Multiples()
{
    int A , B;
    cin >> A >> B;
    if(A % B == 0 || B % A == 0) cout << "Multiples";
    else cout << "No Multiples";
}

void Max_and_Min()
{
    int A , B , C;
    cin >> A >> B >> C;

    if(A <= B && A <= C) 
        cout << A << " ";
    else if(B <= A && B <= C) 
        cout << B << " ";
    else 
        cout << C << " ";

    if(A >= B && A >= C)
        cout << A;
    else if(B >= A && B >= C)
        cout << B;
    else
        cout << C;
}

void The_Brothers()
{
    string F1 , S1 , F2 , S2;
    cin >> F1 >> S1;
    cin >> F2 >> S2;
    if(S1 == S2)
        cout << "ARE Brothers";
    else 
        cout << "NOT";
}

void Capital_or_Small_or_Digit()
{
    char C;

    cin >> C;

    if(C >= 65 && C <= 90)
    {
        cout << "ALPHA" << "\n";
        cout << "IS CAPITAL" << "\n";
    }
    else if(C >= 97 && C <= 122)
    {
        cout << "ALPHA" << "\n";
        cout << "IS SMALL" << "\n";
    }
    else
    {
        cout << "IS DIGIT" << "\n";
    }
}

void Char()
{
    char C;
    cin >> C;
    if(C >= 65 && C <= 90)
        cout << char(C + 32);
    else
        cout << char(C - 32);
}

void Calculator()
{
    int A , B;
    char Op;

    cin >> A >> Op >> B;
    if(Op == '+')
        cout << A + B;
    else if(Op == '-')
        cout << A - B;
    else if(Op == '*')
        cout << A * B;
    else
        cout << A / B;
}

void First_digit()
{
    short A;
    cin >> A;
    if((A / 1000) % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";
}

void Coordinates_of_a_Point()
{
    float X , Y;
    cin >> X >> Y;

    if (X == 0 && Y == 0) {
        cout << "Origem";
    } else if (X == 0) {
        cout << "Eixo Y";
    } else if (Y == 0) {
        cout << "Eixo X";
    } else if (X > 0 && Y > 0) {
        cout << "Q1";
    } else if (X < 0 && Y > 0) {
        cout << "Q2";
    } else if (X < 0 && Y < 0) {
        cout << "Q3";
    } else { // (X > 0 && Y < 0)
        cout << "Q4";
    }
}

void Age_in_Days()
{
    int Day;
    cin >> Day;

    int Month = 0, Year = 0;

    while(Day >= 365)
    {
        Year++;
        Day -= 365;
    }

    while(Day >= 30)
    {
        Month++;
        Day -= 30;
    }
    cout << Year << " years" << "\n";
    cout << Month << " months" << "\n";
    cout << Day << " days" << "\n";
}

void Interval()
{
    float X;
    cin >> X;
    // [0,25], (25,50], (50,75], (75,100]
    if(X >=0 && X <= 25)
        cout << "Interval [0,25]";
    else if(X > 25 && X <= 50)
        cout << "Interval (25,50]";
    else if(X > 50 && X <= 75)
        cout << "Interval (50,75]";
    else if(X > 75 && X <= 100)
        cout << "Interval (75,100]";
    else
        cout << "Out of Intervals";
}

void Sort_Numbers()
{
    int A , B , C;
    cin >> A >> B >> C;
 
    int Max , Mid , Min;
 
    // Min Number
    if(A <= B && A <= C)
        Min = A;
    else if(B <= A && B <= C)
        Min = B;
    else 
        Min = C;
 
    // Max Number
    if(A >= B && A >= C)
        Max = A;
    else if(B >= A && B >= C)
        Max = B;
    else 
        Max = C;
 
    Mid = A + B + C - Max - Min;
 
    cout << Min << "\n";
    cout << Mid << "\n";
    cout << Max << "\n";
 
    cout << "\n";
 
    cout << A << "\n";
    cout << B << "\n";
    cout << C << "\n";
}

void Float_or_int()
{
    float N;
    cin >> N;

    string S = to_string(N);
    bool Case = false;
    string Temp = "";

    for(int i = 0 ; i < S.length() ; i++)
    {
        if(S[i] == '.')
        {
           Case = true;
           continue; 
        }

        if(Case)
        {
            Temp += S[i];
        }
    }

    if(stoi(Temp) > 0)
        cout << "float " << int(N) << " " << N - int(N);
    else
        cout << "int " << int(N);
}

void Comparison()
{
    short A , B;
    char C;
    cin >> A >> C >> B;

    if(C == '>')
    {
        if(A > B) cout << "Right";
        else cout << "Wrong";
    }
    else if(C == '<')
    {
        if(A < B) cout << "Right";
        else cout << "Wrong";
    }
    else if(C == '=')
    {
        if(A == B) cout << "Right";
        else cout << "Wrong";
    }
}

void Mathematical_Expression()
{
    short A , B;
    int C;
    char S , Q;
 
    cin >> A >> S >> B >> Q >> C;
    if(S == '+')
    {
        if(A + B == C) cout << "Yes";
        else cout << A + B;
    }
    else if(S == '-')
    {
        if(A - B == C) cout << "Yes";
        else cout << A - B;
    }
    else if(S == '*')
    {
        if(A * B == C) cout << "Yes";
        else cout << A * B;
    }
}

void Two_intervals()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    // تحقق من وجود تداخل بين النطاقين
    int start = max(A, C); // بداية النطاق المشترك
    int end = min(B, D);   // نهاية النطاق المشترك

    if (start <= end) {
        cout << start << " " << end;
    } else {
        cout << -1; // لا يوجد تداخل
    }
}

void The_last_2_digits()
{
    unsigned long long A , B , C , D;
    cin >> A >> B >> C >> D;

    unsigned long long ab ,cd; 
    ab = (A * B) % 100;
    cd = (C * D) % 100;

    if((ab * cd) % 100 < 10)
        cout << '0' << (ab * cd) % 100;
    else
        cout << (ab * cd) % 100;
}

void Hard_Compare()
{
    long long A , B , C , D;
    cin >> A >> B >> C >> D;
    double aa = B * log(A) , bb = D * log(C);
    if(aa > bb)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main() 
{
    //  شيت اسيوط
} 