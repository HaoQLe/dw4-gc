#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148B20();
void *fn_80150A70();
void fn_80150AAC();
void fn_80150D90();
void fn_8015108C();
extern char lbl_8049FE98[];
extern void *lbl_805644D4;
extern void *lbl_805644D8;
void fn_80150BD0();
void *fn_80150C38();
}
extern "C" {
void fn_80150BA8(){
 fn_80066188((int)fn_80150BD0);
}
void fn_80150BD0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644D4,(int)fn_8015108C,(int)fn_80148B20,(int)fn_80150C38,(int)lbl_8049FE98,44,(int)fn_80150AAC,0,0,0);
}
void *fn_80150C38(){return fn_80150A70();}
void *fn_80150C58(){
 if(!lbl_805644D8 || !(reinterpret_cast<unsigned int *>(lbl_805644D8)[0x24/4]&4)) fn_80150D90();
 return lbl_805644D8;
}
}
#pragma pop
