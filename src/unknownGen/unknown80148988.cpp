#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148640();
void *fn_80148840();
void fn_8014887C();
void fn_80148C94();
void fn_8015108C();
extern char lbl_8049EDF4[];
extern char lbl_8049EE0C[];
extern void *lbl_80564258;
extern void *lbl_8056425C;
extern void *lbl_80564260;
extern void *lbl_805644E0;
void fn_801489B0();
void *fn_80148A18();
void *fn_80148A38();
void fn_80148A74();
void fn_80148A9C();
void *fn_80148B00();
void *fn_80148B20();
}
extern "C" {
void fn_80148988(){
 fn_80066188((int)fn_801489B0);
}
void fn_801489B0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564258,(int)fn_80148A9C,(int)fn_80148640,(int)fn_80148A18,(int)lbl_8049EDF4,44,(int)fn_8014887C,0,0,0);
}
void *fn_80148A18(){return fn_80148840();}
void *fn_80148A38(){
 if(!lbl_8056425C || !(reinterpret_cast<unsigned int *>(lbl_8056425C)[0x24/4]&4)) fn_80148A74();
 return lbl_8056425C;
}
void fn_80148A74(){
 fn_80066188((int)fn_80148A9C);
}
void fn_80148A9C(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_8056425C,(int)fn_8015108C,(int)fn_80148B20,(int)fn_80148B00,(int)lbl_8049EE0C,44,0,0,0,0);
}
void *fn_80148B00(){return fn_80148A38();}
void *fn_80148B20(){return lbl_805644E0;}
void *fn_80148B28(){
 if(!lbl_80564260 || !(reinterpret_cast<unsigned int *>(lbl_80564260)[0x24/4]&4)) fn_80148C94();
 return lbl_80564260;
}
}
#pragma pop
