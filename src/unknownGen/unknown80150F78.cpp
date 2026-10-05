#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013496C();
void fn_80145C0C();
void *fn_80148B20();
void *fn_80150E40();
void fn_80150E7C();
void fn_8015111C();
extern char lbl_8049FECC[];
extern char lbl_8049FEE4[];
extern char lbl_8055FCAC[8];
extern void *lbl_805644DC;
extern void *lbl_805644E0;
void fn_80150FA0();
void *fn_80151008();
void *fn_80151028();
void fn_80151064();
void fn_8015108C();
void *fn_801510FC();
}
extern "C" {
void fn_80150F78(){
 fn_80066188((int)fn_80150FA0);
}
void fn_80150FA0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644DC,(int)fn_8015108C,(int)fn_80148B20,(int)fn_80151008,(int)lbl_8049FECC,44,(int)fn_80150E7C,0,0,0);
}
void *fn_80151008(){return fn_80150E40();}
void *fn_80151028(){
 if(!lbl_805644E0 || !(reinterpret_cast<unsigned int *>(lbl_805644E0)[0x24/4]&4)) fn_80151064();
 return lbl_805644E0;
}
void fn_80151064(){
 fn_80066188((int)fn_8015108C);
}
void fn_8015108C(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805644E0,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_801510FC,(int)lbl_8049FEE4,44,0,(int)fn_8015111C,0,(int)lbl_8055FCAC);
}
void *fn_801510FC(){return fn_80151028();}
}
#pragma pop
