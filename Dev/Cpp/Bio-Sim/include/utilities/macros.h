// export module biosim.macros;
#define nameof(x) #x
#define DNAPOSSIBILITIES "In DNA strand cannot be anything but A, T, C, G!\n"
#define RNAPOSSIBILITIES "In RNA strand cannot be anything but A, U, C, G!\n"

#define CONSTRUCTORS(class_, common_t, copy, move, move_t, move_mem) \
explicit class_##() : strand{} {}; \
    explicit class_##(##common_t arg) noexcept \
    { \
        this->arg = arg; \
    } \
    explicit class_##(##class_##& other) noexcept \
    { \
        this->##copy = other.##copy##; \
    } \
    explicit class_##(##class_##&& other) noexcept \
    { \
        this->##move = other.##move##; \
        other.##move = {}; \
    } \
    explicit class_##(##move_t##&& arg) : move_mem##(std::move(arg)) {} \
    class_##& operator =(##class_##&& other) noexcept \
    { \
        this->##move_mem = other.##move_mem##; \
        other.##move_mem = {}; \
        return *this; \
    }