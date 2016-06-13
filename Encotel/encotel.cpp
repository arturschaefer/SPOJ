#include <iostream>
#include <string>
#include <string.h>
#include <map>
#include <utility>

using namespace std;

/*  TROCAR NOME POR TELEFONE

*/
void preencer_map ( map<string, int> &mp);

int main(){
    int num;
    map<string, int> mp_times;
    preencer_map (mp_times);
    map<string, int>::iterator iter;
    string completo, saida;
    char c;
    while ( cin >> completo ){
        cout << "Entrada: " << completo << endl;
        for ( int i = 0; i < completo.size(); i++){
            if (completo[i] != '-'){
                c = completo[i];
                iter = mp_times.find(&c);
                cout << iter->second << endl;
                if(iter->second >=2 && iter->second <= 9){
                    saida[i] = iter->second;

                }
                else saida[i] = completo[i];
            }else   saida[i] = completo[i];
        }
        /*int tot_empates = N*T;
        iter = mp_times.begin();
        cout << mp_times.size() << endl;
        for ( iter; iter != mp_times.end(); iter++){
            cout << iter->first << "_" << iter->second << endl;
        }
        cout << "Empates -> " << empates << " " << tot_empates - tot_pontos << "\n" << endl;
        empates = 0;
        mp_times.clear();*/
        cout << saida << endl;
        mp_times.clear();
        saida.clear();
        completo.clear();
    }

    return 0;
}

void preencer_map ( map<string, int> &mp){
    mp.insert(pair<string, int>("A", 2));
    mp.insert(pair<string, int>("B", 2));
    mp.insert(pair<string, int>("C", 2));
    mp.insert(pair<string, int>("D", 3));
    mp.insert(pair<string, int>("E", 3));
    mp.insert(pair<string, int>("F", 3));
    mp.insert(pair<string, int>("G", 4));
    mp.insert(pair<string, int>("H", 4));
    mp.insert(pair<string, int>("I", 4));
    mp.insert(pair<string, int>("J", 5));
    mp.insert(pair<string, int>("K", 5));
    mp.insert(pair<string, int>("L", 5));
    mp.insert(pair<string, int>("M", 6));
    mp.insert(pair<string, int>("N", 6));
    mp.insert(pair<string, int>("O", 6));
    mp.insert(pair<string, int>("P", 7));
    mp.insert(pair<string, int>("Q", 7));
    mp.insert(pair<string, int>("S", 7));
    mp.insert(pair<string, int>("T", 8));
    mp.insert(pair<string, int>("U", 8));
    mp.insert(pair<string, int>("V", 8));
    mp.insert(pair<string, int>("W", 9));
    mp.insert(pair<string, int>("X", 9));
    mp.insert(pair<string, int>("Y", 9));
    mp.insert(pair<string, int>("Z", 9));
}
