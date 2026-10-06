#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803287F8();
void fn_80328844();
void fn_80328DA8();
void fn_8032A928();
extern char lbl_80453528[];
extern char lbl_80535D64[];
extern void *lbl_80535D68;
extern void *lbl_80535DA0;
void fn_80328B84();
void *fn_80328BF0();
void *fn_80328C10();
}
extern "C" {
void fn_80328B5C(){
 fn_80066188((int)fn_80328B84);
}
void fn_80328B84(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D64,(int)fn_8032A928,(int)fn_80328C10,(int)fn_80328BF0,(int)lbl_80453528,112,(int)fn_80328844,0,0,0);
}
void *fn_80328BF0(){return fn_803287F8();}
void *fn_80328C10(){return lbl_80535DA0;}
void *fn_80328C20(void *object){
 fn_80328DA8();
 return fn_8006546C(lbl_80535D68,object);
}
void *fn_80328C60(){
 if(!lbl_80535D68 || !(reinterpret_cast<unsigned int *>(lbl_80535D68)[0x24/4]&4)) fn_80328DA8();
 return lbl_80535D68;
}
}
#pragma pop
