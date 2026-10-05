#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_8032E570();
void fn_8032E5BC();
void fn_8032E9BC();
void fn_80333F14();
extern char lbl_8045396C[];
extern char lbl_804E1CB8[];
extern char lbl_80535E74[];
void fn_8032E920();
void *fn_8032E99C();
}
extern "C" {
void fn_8032E8F8(){
 fn_80066188((int)fn_8032E920);
}
void fn_8032E920(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E74,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032E99C,(int)lbl_8045396C,92,(int)fn_8032E5BC,(int)fn_8032E9BC,0,(int)lbl_804E1CB8);
}
void *fn_8032E99C(){return fn_8032E570();}
}
#pragma pop
