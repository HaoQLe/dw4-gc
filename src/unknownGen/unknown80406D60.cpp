#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802E170C();
void fn_80402E28();
void *fn_80406B18();
void fn_80406B64();
void fn_80406E24();
void fn_80407B3C();
extern char lbl_80462774[];
extern char lbl_804F09BC[];
extern char lbl_8055C9A4[];
void fn_80406D88();
void *fn_80406E04();
}
extern "C" {
void fn_80406D60(){
 fn_80066188((int)fn_80406D88);
}
void fn_80406D88(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C9A4,(int)fn_80407B3C,(int)fn_802E170C,(int)fn_80406E04,(int)lbl_80462774,188,(int)fn_80406B64,(int)fn_80406E24,0,(int)lbl_804F09BC);
}
void *fn_80406E04(){return fn_80406B18();}
}
#pragma pop
