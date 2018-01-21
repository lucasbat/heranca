/*
 *	Exemplo de Herança tirado do livro Treinamento em C++ (2)
 *
 */

#include<iostream>
#include<dos.h>
#include<string>

const int VIDEO = 0x10;
void poscur(char lin,char col);
void limpabox(char li, char ci,char lf, char cf, char atr=7);

inline int max(int x, int y){return x > y ? x:y;} 
inline int min(int x, int y){return x < y ? x:y;}

class janela{
	private:
		int linicio,cinicio,lfim,cfim;

	public:
		janela(){linicio=cinicio=1;lfim23;cfim=78;}
		
		janela(int li, int ci, int lf, int cf){
			linicio=max(0,li); linicio=min(24,li);
			lfim   =max(0,lf); lfim   =min(24,lf);
			linicio=min(li,lf);
			
			cinicio=max(0,ci); cinicio=min(79,ci);
			cfim   =max(0,cf); cfim   =min(79,cf);
			cinicio=min(ci,cf);
		}
		void box(char modo[]="?????");
};

