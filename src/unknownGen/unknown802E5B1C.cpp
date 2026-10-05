#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
void fn_802E3284();
void *fn_802E58D8();
void fn_802E5924();
void fn_802E5BE0();
extern char lbl_80420FB8[];
extern char lbl_804D306C[];
extern char lbl_805357BC[];
void fn_802E5B44();
void *fn_802E5BC0();
}
extern "C" {
void fn_802E5B1C(){
 fn_80066188((int)fn_802E5B44);
}
void fn_802E5B44(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805357BC,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_802E5BC0,(int)lbl_80420FB8,60,(int)fn_802E5924,(int)fn_802E5BE0,0,(int)lbl_804D306C);
}
void *fn_802E5BC0(){return fn_802E58D8();}
}
#pragma pop
