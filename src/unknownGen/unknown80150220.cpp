#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148B20();
void *fn_801500E8();
void fn_80150124();
void fn_80150408();
void fn_8015108C();
extern char lbl_8049FE0C[];
extern void *lbl_805644C0;
extern void *lbl_805644C4;
void fn_80150248();
void *fn_801502B0();
}
extern "C" {
void fn_80150220(){
 fn_80066188((int)fn_80150248);
}
void fn_80150248(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644C0,(int)fn_8015108C,(int)fn_80148B20,(int)fn_801502B0,(int)lbl_8049FE0C,44,(int)fn_80150124,0,0,0);
}
void *fn_801502B0(){return fn_801500E8();}
void *fn_801502D0(){
 if(!lbl_805644C4 || !(reinterpret_cast<unsigned int *>(lbl_805644C4)[0x24/4]&4)) fn_80150408();
 return lbl_805644C4;
}
}
#pragma pop
