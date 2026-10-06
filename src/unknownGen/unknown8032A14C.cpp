#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void *fn_8032A004();
void fn_8032A050();
void fn_8032A388();
void fn_8032A928();
extern char lbl_804535F8[];
extern char lbl_80535D90[];
extern void *lbl_80535D94;
void fn_8032A174();
void *fn_8032A1E0();
}
extern "C" {
void fn_8032A14C(){
 fn_80066188((int)fn_8032A174);
}
void fn_8032A174(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D90,(int)fn_8032A928,(int)fn_80328C10,(int)fn_8032A1E0,(int)lbl_804535F8,112,(int)fn_8032A050,0,0,0);
}
void *fn_8032A1E0(){return fn_8032A004();}
void *fn_8032A200(void *object){
 fn_8032A388();
 return fn_8006546C(lbl_80535D94,object);
}
void *fn_8032A240(){
 if(!lbl_80535D94 || !(reinterpret_cast<unsigned int *>(lbl_80535D94)[0x24/4]&4)) fn_8032A388();
 return lbl_80535D94;
}
}
#pragma pop
