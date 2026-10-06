#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void *fn_80327D2C();
void fn_80327D78();
void fn_803282B8();
void fn_80328720();
extern char lbl_804534D8[];
extern char lbl_80535D54[];
extern void *lbl_80535D58;
void fn_80327FA0();
void *fn_8032800C();
}
extern "C" {
void fn_80327F78(){
 fn_80066188((int)fn_80327FA0);
}
void fn_80327FA0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D54,(int)fn_80328720,(int)fn_80326F88,(int)fn_8032800C,(int)lbl_804534D8,80,(int)fn_80327D78,0,0,0);
}
void *fn_8032800C(){return fn_80327D2C();}
void *fn_8032802C(void *object){
 fn_803282B8();
 return fn_8006546C(lbl_80535D58,object);
}
void *fn_8032806C(){
 if(!lbl_80535D58 || !(reinterpret_cast<unsigned int *>(lbl_80535D58)[0x24/4]&4)) fn_803282B8();
 return lbl_80535D58;
}
}
#pragma pop
