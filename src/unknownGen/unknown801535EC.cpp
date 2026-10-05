#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80135970();
void fn_801536E4();
void fn_801537E0();
extern char lbl_804A0298[];
extern char lbl_804A02A4[];
extern void *lbl_80564594;
void *fn_801535EC();
void fn_80153628();
void fn_80153650();
void *fn_801536C4();
}
extern "C" {
void *fn_801535EC(){
 if(!lbl_80564594 || !(reinterpret_cast<unsigned int *>(lbl_80564594)[0x24/4]&4)) fn_80153628();
 return lbl_80564594;
}
void fn_80153628(){
 fn_80066188((int)fn_80153650);
}
void fn_80153650(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564594,(int)fn_801537E0,(int)fn_80135970,(int)fn_801536C4,(int)lbl_804A02A4,40,0,(int)fn_801536E4,0,(int)lbl_804A0298);
}
void *fn_801536C4(){return fn_801535EC();}
}
#pragma pop
