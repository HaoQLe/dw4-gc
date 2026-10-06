#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void *fn_803279EC();
void fn_80327A38();
void fn_80327F78();
void fn_80328720();
extern char lbl_804534C4[];
extern char lbl_80535D50[];
extern void *lbl_80535D54;
void fn_80327C60();
void *fn_80327CCC();
}
extern "C" {
void fn_80327C38(){
 fn_80066188((int)fn_80327C60);
}
void fn_80327C60(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D50,(int)fn_80328720,(int)fn_80326F88,(int)fn_80327CCC,(int)lbl_804534C4,80,(int)fn_80327A38,0,0,0);
}
void *fn_80327CCC(){return fn_803279EC();}
void *fn_80327CEC(void *object){
 fn_80327F78();
 return fn_8006546C(lbl_80535D54,object);
}
void *fn_80327D2C(){
 if(!lbl_80535D54 || !(reinterpret_cast<unsigned int *>(lbl_80535D54)[0x24/4]&4)) fn_80327F78();
 return lbl_80535D54;
}
}
#pragma pop
