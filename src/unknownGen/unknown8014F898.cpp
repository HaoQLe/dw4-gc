#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148B20();
void *fn_8014F760();
void fn_8014F79C();
void fn_8014FA80();
void fn_8015108C();
extern char lbl_8049FD60[];
extern void *lbl_805644AC;
extern void *lbl_805644B0;
void fn_8014F8C0();
void *fn_8014F928();
}
extern "C" {
void fn_8014F898(){
 fn_80066188((int)fn_8014F8C0);
}
void fn_8014F8C0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644AC,(int)fn_8015108C,(int)fn_80148B20,(int)fn_8014F928,(int)lbl_8049FD60,44,(int)fn_8014F79C,0,0,0);
}
void *fn_8014F928(){return fn_8014F760();}
void *fn_8014F948(){
 if(!lbl_805644B0 || !(reinterpret_cast<unsigned int *>(lbl_805644B0)[0x24/4]&4)) fn_8014FA80();
 return lbl_805644B0;
}
}
#pragma pop
