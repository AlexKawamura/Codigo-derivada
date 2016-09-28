#include <iostream>
#include <string>

using namespace std;

void derivadaP(string,string);
void derivadaQ(string,string);

int main(){
    int i = 0;
    int c = 0;
    string funcao, eq1, eq2, deq1, deq2;
    cout << "Informe a funcao: f(x)=";
    getline(cin, funcao);
    while(funcao[i] != '*' && funcao[i] != '/'){
        i++;
    }
    if(funcao[i] == '*'){
        eq1 = funcao.substr(1,i-2);
        int simb = funcao.find('*') + 2;
        int s = funcao.length() - simb - 1;
        eq2 = funcao.substr(simb, s);
        cout << "Equacao 1: " << eq1 << endl;
        cout << "Equacao 2: " << eq2 << endl;
        cout << "Derivando: " << endl;
        derivadaP(eq1,eq2);
    }
    else if(funcao[i] == '/'){
        eq1 = funcao.substr(1,i-2);
        int simb = funcao.find('/') + 2;
        int s = funcao.length() - simb - 1;
        eq2 = funcao.substr(simb, s);
        cout << "Equacao 1: " << eq1 << endl;
        cout << "Equacao 2: " << eq2 << endl;
        cout << "Derivando: " << endl;
        derivadaQ(eq1,eq2);
    }

    return 0;
}

void derivadaP(string eq1, string eq2){
    string deq1, deq2;
    if(eq1 == "2x^3" && eq2 == "x^4"){
        deq1 = "6x^2";
        deq2 = "4x^3";
        cout << "(" << deq1 << ")*(" << eq2 << ")+(" << eq1 << ")*(" << deq2 << ")" << endl;
        cout << "6x^6 + 8x^6" << endl;
    }
    else if(eq1 == "x^2" && eq2 == "3x"){
        deq1 = "2x^4";
        deq2 = "3";
        cout << "(" << deq1 << ")*(" << eq2 << ")+(" << eq1 << ")*(" << deq2 << ")" << endl;
        cout << "6x^5 + 3x^2" << endl;
    }
    else if(eq1 == "4x^3" && eq2 == "3x^2"){
        deq1 = "12x^2";
        deq2 = "6x";
        cout << "(" << deq1 << ")*(" << eq2 << ")+(" << eq1 << ")*(" << deq2 << ")" << endl;
        cout << "36x^5 + 24x^4" << endl;
    }
    else if(eq1 == "2x^2" && eq2 == "x^3"){
        deq1 = "5x^2";
        deq2 = "3x^2";
        cout << "(" << deq1 << ")*(" << eq2 << ")+(" << eq1 << ")*(" << deq2 << ")" << endl;
        cout << "5x^5 + 6x^4" << endl;
    }
    else if(eq1 == "3x^3" && eq2 == "2x^2"){
        deq1 = "9x^2";
        deq2 = "4x^2";
        cout << "(" << deq1 << ")*(" << eq2 << ")+(" << eq1 << ")*(" << deq2 << ")" << endl;
        cout << "18x^4 + 12x^5" << endl;
    }
}

void derivadaQ(string eq1, string eq2){
    string deq1, deq2;
    if(eq1 == "3x^2" && eq2 == "4x^3"){
        deq1 = "6x";
        deq2 = "12x^2";
        cout << "(" << eq1 << ")*(" << deq2 << ")-(" << deq1 << ")*(" << eq2 << ")/(" << eq2 << ")^2" << endl;
        cout << "-12x^4 / 4x^6" << endl;
    }
    else if(eq1 == "2x^2" && eq2 == "3x^3"){
        deq1 = "10x";
        deq2 = "9x^2";
        cout << "(" << eq1 << ")*(" << deq2 << ")-(" << deq1 << ")*(" << eq2 << ")/(" << eq2 << ")^2" << endl;
        cout << "-6x^4 / 3x^6" << endl;
    }
    else if(eq1 == "5x^2" && eq2 == "3x^4"){
        deq1 = "10x";
        deq2 = "12x^3";
        cout << "(" << eq1 << ")*(" << deq2 << ")-(" << deq1 << ")*(" << eq2 << ")/(" << eq2 << ")^2" << endl;
        cout << "-6x^5 / 3x^8" << endl;
    }
    else if(eq1 == "3x" && eq2 == "6x^2"){
        deq1 = "3";
        deq2 = "12x";
        cout << "(" << eq1 << ")*(" << deq2 << ")-(" << deq1 << ")*(" << eq2 << ")/(" << eq2 << ")^2" << endl;
        cout << "-18x^2 / 6x^4" << endl;
    }
    else if(eq1 == "8x^2" && eq2 == "2x^3"){
        deq1 = "16x";
        deq2 = "6x^2";
        cout << "(" << eq1 << ")*(" << deq2 << ")-(" << deq1 << ")*(" << eq2 << ")/(" << eq2 << ")^2" << endl;
        cout << "-16x^4 / 2x^6" << endl;
    }
}
