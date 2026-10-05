#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void *fn_80285384();
void fn_802853D0();
void fn_8028556C();
void fn_8028557C();
void fn_8028570C();
extern char lbl_80416A54[];
extern char lbl_804CB0C0[];
extern char lbl_80515CA0[];
void fn_802854D0();
void *fn_8028554C();
}
extern "C" {
void fn_802854A8(){
 fn_80066188((int)fn_802854D0);
}
void fn_802854D0(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515CA0,(int)fn_8028570C,(int)fn_8028556C,(int)fn_8028554C,(int)lbl_80416A54,16,(int)fn_802853D0,(int)fn_8028557C,0,(int)lbl_804CB0C0);
}
void *fn_8028554C(){return fn_80285384();}
}
#pragma pop
