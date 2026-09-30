#include <igCore/igCoreAll.h>
#include <igGap.h>   

// Partial ABI view: the MW vtable reserves its first two words.
// Slots 0x08..0xA4 are placeholders; their signatures remain unrecovered.
class Unknown805621C8 {
    virtual void unknown08();
    virtual void unknown0C();
    virtual void unknown10();
    virtual void unknown14();
    virtual void unknown18();
    virtual void unknown1C();
    virtual void unknown20();
    virtual void unknown24();
    virtual void unknown28();
    virtual void unknown2C();
    virtual void unknown30();
    virtual void unknown34();
    virtual void unknown38();
    virtual void unknown3C();
    virtual void unknown40();
    virtual void unknown44();
    virtual void unknown48();
    virtual void unknown4C();
    virtual void unknown50();
    virtual void unknown54();
    virtual void unknown58();
    virtual void unknown5C();
    virtual void unknown60();
    virtual void unknown64();
    virtual void unknown68();
    virtual void unknown6C();
    virtual void unknown70();
    virtual void unknown74();
    virtual void unknown78();
    virtual void unknown7C();
    virtual void unknown80();
    virtual void unknown84();
    virtual void unknown88();
    virtual void unknown8C();
    virtual void unknown90();
    virtual void unknown94();
    virtual void unknown98();
    virtual void unknown9C();
    virtual void unknownA0();
    virtual void unknownA4();
public:
    virtual void unknownA8();
    virtual void unknownAC();
};

// Address-based declarations preserve unrecovered dependency types and names.
extern "C" {
    void fn_80092280();
    void *fn_8006070C(Gap::igUnsignedInt);
    void *fn_8005AF08(void *);
    void *fn_800607F4(void *);
    void *fn_8002DB4C(void *);
    Gap::igUnsignedInt fn_8005641C(void *);
    void fn_8005383C(void *, Gap::igInt);
    void *fn_800560F8(Gap::igUnsignedInt);
    void *fn_8003E848(void *);
    void fn_8002A0A8();
    void fn_8002AAD4();
    void fn_80039D6C();
    void fn_800396F8();
    void fn_80038E9C();
    void fn_8003922C();
    void fn_8002CBBC();
    void fn_80036A94();
    void fn_800368D4();
    void fn_80036684();
    void fn_800364C4();
    void fn_80035D80();
    void fn_80035BC0();
    void fn_800249F4();
    void fn_80024334();
    void fn_80038478();
    void fn_80038244();
    void fn_8003BDD8();
    void fn_8002D584();
    void fn_80030D50();
    void fn_8002FACC();
    void fn_8002CFA8();
    void fn_8002320C();
    void *fn_80027824();

    extern void *lbl_805621C8;
    extern void *lbl_805621E0;
    extern void *lbl_8056229C;
    extern void *lbl_80561688;
}

namespace Gap{
    namespace Core{

        void igArkCore::checkAlchemyVersion(igInt alchemyVersion){

            // The version-mismatch gate is at 0x79; the surrounding fields remain unrecovered.
            if(alchemyVersion != IG_ALCHEMY_VERSION &&
               reinterpret_cast<const igBool*>(_unknown16)[0x79 - 0x16] == true){
                IG_PRIVATE_REPORT_ERROR((
                "The headers used to build the Alchemy Core (version %d) do not match the currently registring dll or application (version %d).\n"
                "This usually means some API changed and you are likely to get unexpected behaviour.\n"
                "To try and load the dll or application anyways, try putting \nfailOnDllVersionMismatch = false in the CORE section of your alchemy.ini",
                IG_ALCHEMY_VERSION, alchemyVersion));
            }
        }

        igArkCore::igArkCore(){
            _unknown14 = 0;
            _preExitStarted = false;
            _unknown16[0] = 0;
            _isBootstrapped = false;
            // Word and byte writes are known; meanings of this storage remain unrecovered.
            reinterpret_cast<igInt*>(_unknown16 + 0x18 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x30 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x20 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x24 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x28 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x2C - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x38 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x44 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x48 - 0x16)[0] = 0;
            _unknown16[0x74 - 0x16] = 0;
            _unknown16[0x75 - 0x16] = 0;
            _unknown16[0x76 - 0x16] = 0;
            _unknown16[0x77 - 0x16] = 0;
            _unknown16[0x78 - 0x16] = 0;
            _unknown16[0x79 - 0x16] = 0;
            _unknown16[0x7A - 0x16] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x7C - 0x16)[0] = 0x80000;
            reinterpret_cast<igInt*>(_unknown16 + 0x80 - 0x16)[0] = -1;
            reinterpret_cast<igInt*>(_unknown16 + 0x84 - 0x16)[0] = -1;
            reinterpret_cast<igInt*>(_unknown16 + 0x88 - 0x16)[0] = -1;
            reinterpret_cast<igInt*>(_unknown16 + 0x8C - 0x16)[0] = -1;
            _unknown16[0x90 - 0x16] = 0;
            _unknown16[0x110 - 0x16] = 0;
            _unknown16[0x190 - 0x16] = 0;
            _unknown16[0x210 - 0x16] = 0;
            _unknown16[0x310 - 0x16] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x50 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x54 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x34 - 0x16)[0] = 0;
            _unknown16[0x5C - 0x16] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x60 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x58 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x64 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x68 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x3C - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x394 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x4C - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x6C - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x70 - 0x16)[0] = 0;
        }

        void igArkCore::initBootstrap(){
            _unknown14 = 1;
            fn_80092280();
            reinterpret_cast<igInt*>(_unknown16 + 0x394 - 0x16)[0] = 0;

            if(!lbl_805621C8){
                void *storage = fn_8006070C(0x19F4);
                if(storage)
                    storage = fn_8005AF08(storage);
                lbl_805621C8 = storage;
            }
            // Observed vtable slots; the class and method meanings remain unknown.
            reinterpret_cast<Unknown805621C8*>(lbl_805621C8)->unknownA8();

            reinterpret_cast<void**>(_unknown16 + 0x18 - 0x16)[0] =
                fn_8002DB4C(fn_800607F4(lbl_805621E0));
            void *unknown18 = reinterpret_cast<void**>(_unknown16 + 0x18 - 0x16)[0];
            void *unknown08 = reinterpret_cast<void**>(unknown18)[0x08 / 4];
            igInt count = !unknown08 ? 0 : fn_8005641C(unknown08) >> 2;
            if(count <= 0x400)
                fn_8005383C(unknown18, 0x400);

            reinterpret_cast<void**>(_unknown16 + 0x24 - 0x16)[0] =
                fn_8002DB4C(fn_800607F4(lbl_805621E0));
            void *storage = fn_800560F8(0xC);
            if(storage)
                storage = fn_8003E848(storage);
            reinterpret_cast<void**>(_unknown16 + 0x28 - 0x16)[0] = storage;
            storage = fn_800560F8(0xC);
            if(storage)
                storage = fn_8003E848(storage);
            reinterpret_cast<void**>(_unknown16 + 0x2C - 0x16)[0] = storage;

            fn_8002A0A8();
            _isBootstrapped = true;
            _numBSMetaObjects = reinterpret_cast<igInt*>(
                reinterpret_cast<void**>(_unknown16 + 0x18 - 0x16)[0])[0x0C / 4];
            _numBSMetaFields = reinterpret_cast<igInt*>(lbl_8056229C)[0x0C / 4];
            fn_8002AAD4();
            fn_80039D6C();
            fn_800396F8();
            fn_80038E9C();
            fn_8003922C();
            fn_8002CBBC();
            fn_80036A94();
            fn_800368D4();
            fn_80036684();
            fn_800364C4();
            fn_80035D80();
            fn_80035BC0();
            fn_800249F4();
            fn_80024334();
            fn_80038478();
            fn_80038244();
            fn_8003BDD8();
            fn_8002D584();
            fn_80030D50();
            fn_8002FACC();
            fn_8002CFA8();
            fn_8002320C();
            lbl_80561688 = fn_80027824();
            reinterpret_cast<Unknown805621C8*>(lbl_805621C8)->unknownAC();
        }

    }
}
