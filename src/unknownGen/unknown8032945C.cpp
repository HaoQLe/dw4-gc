#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void *fn_80329314();
void fn_80329360();
void fn_80329698();
void fn_8032A928();
extern char lbl_80453578[];
extern char lbl_80535D74[];
extern void *lbl_80535D78;
void fn_80329484();
void *fn_803294F0();
}
extern "C" {
void fn_8032945C(){
 fn_80066188((int)fn_80329484);
}
void fn_80329484(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D74,(int)fn_8032A928,(int)fn_80328C10,(int)fn_803294F0,(int)lbl_80453578,112,(int)fn_80329360,0,0,0);
}
void *fn_803294F0(){return fn_80329314();}
void *fn_80329510(void *object){
 fn_80329698();
 return fn_8006546C(lbl_80535D78,object);
}
void *fn_80329550(){
 if(!lbl_80535D78 || !(reinterpret_cast<unsigned int *>(lbl_80535D78)[0x24/4]&4)) fn_80329698();
 return lbl_80535D78;
}
}
#pragma pop
