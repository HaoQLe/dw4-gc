#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802E170C();
void fn_80402E28();
void *fn_804073BC();
void fn_80407408();
void fn_80407578();
void fn_80407B3C();
extern char lbl_80462928[];
extern char lbl_804F0BB4[];
extern char lbl_8055CA20[];
void fn_804074DC();
void *fn_80407558();
}
extern "C" {
void fn_804074B4(){
 fn_80066188((int)fn_804074DC);
}
void fn_804074DC(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CA20,(int)fn_80407B3C,(int)fn_802E170C,(int)fn_80407558,(int)lbl_80462928,160,(int)fn_80407408,(int)fn_80407578,0,(int)lbl_804F0BB4);
}
void *fn_80407558(){return fn_804073BC();}
}
#pragma pop
