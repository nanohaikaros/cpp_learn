template <typename T>
class EverythingButInt {
    public:
        EverythingButInt() {
            static_assert(sizeof(T) != sizeof(int), "No int please!");
        }
};

int main() {
    EverythingButInt<int> test;     // template instantiation with int
    return 0;
}