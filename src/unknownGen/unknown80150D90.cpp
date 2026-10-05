#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148B20();
void *fn_80150C58();
void fn_80150C94();
void fn_80150F78();
void fn_8015108C();
extern char lbl_8049FEB0[];
extern void *lbl_805644D8;
extern void *lbl_805644DC;
void fn_80150DB8();
void *fn_80150E20();
}
extern "C" {
void fn_80150D90(){
 fn_80066188((int)fn_80150DB8);
}
void fn_80150DB8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644D8,(int)fn_8015108C,(int)fn_80148B20,(int)fn_80150E20,(int)lbl_8049FEB0,44,(int)fn_80150C94,0,0,0);
}
void *fn_80150E20(){return fn_80150C58();}
void *fn_80150E40(){
 if(!lbl_805644DC || !(reinterpret_cast<unsigned int *>(lbl_805644DC)[0x24/4]&4)) fn_80150F78();
 return lbl_805644DC;
}
}
#pragma pop
