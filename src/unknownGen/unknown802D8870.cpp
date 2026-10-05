#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802D8714();
void fn_802D8760();
void fn_802D8934();
void fn_802E3908();
extern char lbl_80420214[];
extern char lbl_804D1F70[];
extern char lbl_80535304[];
void fn_802D8898();
void *fn_802D8914();
}
extern "C" {
void fn_802D8870(){
 fn_80066188((int)fn_802D8898);
}
void fn_802D8898(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535304,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802D8914,(int)lbl_80420214,40,(int)fn_802D8760,(int)fn_802D8934,0,(int)lbl_804D1F70);
}
void *fn_802D8914(){return fn_802D8714();}
}
#pragma pop
