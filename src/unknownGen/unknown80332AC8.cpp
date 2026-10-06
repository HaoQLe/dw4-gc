#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80332910();
void *fn_80332960();
void fn_803329AC();
void fn_80332D24();
void fn_80332E4C();
extern char lbl_80453BA0[];
extern char lbl_80535F34[];
extern void *lbl_80535F38;
void fn_80332AF0();
void *fn_80332B5C();
}
extern "C" {
void fn_80332AC8(){
 fn_80066188((int)fn_80332AF0);
}
void fn_80332AF0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F34,(int)fn_80332E4C,(int)fn_80332910,(int)fn_80332B5C,(int)lbl_80453BA0,124,(int)fn_803329AC,0,0,0);
}
void *fn_80332B5C(){return fn_80332960();}
void *fn_80332B7C(void *object){
 fn_80332D24();
 return fn_8006546C(lbl_80535F38,object);
}
void *fn_80332BBC(){
 if(!lbl_80535F38 || !(reinterpret_cast<unsigned int *>(lbl_80535F38)[0x24/4]&4)) fn_80332D24();
 return lbl_80535F38;
}
}
#pragma pop
