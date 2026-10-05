#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_8013A9EC();
void *fn_8013AFE4();
void *fn_80140F78();
void fn_80140FB4();
void fn_80141348();
extern char lbl_8049E0AC[];
extern void *lbl_80564028;
extern void *lbl_8056402C;
void fn_80141154();
void *fn_801411BC();
}
extern "C" {
void fn_8014112C(){
 fn_80066188((int)fn_80141154);
}
void fn_80141154(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564028,(int)fn_8013A9EC,(int)fn_8013AFE4,(int)fn_801411BC,(int)lbl_8049E0AC,52,(int)fn_80140FB4,0,0,0);
}
void *fn_801411BC(){return fn_80140F78();}
void *fn_801411DC(){
 if(!lbl_8056402C || !(reinterpret_cast<unsigned int *>(lbl_8056402C)[0x24/4]&4)) fn_80141348();
 return lbl_8056402C;
}
}
#pragma pop
