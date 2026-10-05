#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148B20();
void *fn_80150888();
void fn_801508C4();
void fn_80150BA8();
void fn_8015108C();
extern char lbl_8049FE7C[];
extern void *lbl_805644D0;
extern void *lbl_805644D4;
void fn_801509E8();
void *fn_80150A50();
}
extern "C" {
void fn_801509C0(){
 fn_80066188((int)fn_801509E8);
}
void fn_801509E8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644D0,(int)fn_8015108C,(int)fn_80148B20,(int)fn_80150A50,(int)lbl_8049FE7C,44,(int)fn_801508C4,0,0,0);
}
void *fn_80150A50(){return fn_80150888();}
void *fn_80150A70(){
 if(!lbl_805644D4 || !(reinterpret_cast<unsigned int *>(lbl_805644D4)[0x24/4]&4)) fn_80150BA8();
 return lbl_805644D4;
}
}
#pragma pop
