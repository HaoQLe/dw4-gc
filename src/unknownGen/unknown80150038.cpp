#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148B20();
void *fn_8014FF00();
void fn_8014FF3C();
void fn_80150220();
void fn_8015108C();
extern char lbl_8049FDF0[];
extern void *lbl_805644BC;
extern void *lbl_805644C0;
void fn_80150060();
void *fn_801500C8();
}
extern "C" {
void fn_80150038(){
 fn_80066188((int)fn_80150060);
}
void fn_80150060(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644BC,(int)fn_8015108C,(int)fn_80148B20,(int)fn_801500C8,(int)lbl_8049FDF0,44,(int)fn_8014FF3C,0,0,0);
}
void *fn_801500C8(){return fn_8014FF00();}
void *fn_801500E8(){
 if(!lbl_805644C0 || !(reinterpret_cast<unsigned int *>(lbl_805644C0)[0x24/4]&4)) fn_80150220();
 return lbl_805644C0;
}
}
#pragma pop
