//实数计算三角函数

#include <stdio.h>
#include <math.h>

// 计算正弦函数
double sine(double angle) {
    return sin(angle);
}

// 计算余弦函数
double cosine(double angle) {
    return cos(angle);
}

// 计算正切函数
double tangent(double angle) {
    return tan(angle);
}

// 计算余切函数（通过正切的倒数计算）
double cotangent(double angle) {
    return 1.0 / tan(angle);
}

// 计算正割函数（通过余弦的倒数计算）
double secant(double angle) {
    return 1.0 / cos(angle);
}

// 计算余割函数（通过正弦的倒数计算）
double cosecant(double angle) {
    return 1.0 / sin(angle);
}

// 反正弦
double arcsin(double a) {
    return asin(a);
}

// 反余弦
double arccos(double a) {
    return acos(a);
}

// 反正切
double arctan(double a) {
    return atan(a);
}

// 反正余切函数（通过反正切计算）
double arccot(double a) {
    if (a!= 0) {
        return M_PI / 2 - atan(a);
    } else {
        printf("输入错误，除数不能为 0\n");
        return 0;
    }
}

// 反正割函数（通过反余弦计算）
double arcsec(double a) {
    if (fabs(a) >= 1) {
        return acos(1 / a);
    } else {
        printf("输入错误，绝对值需大于等于 1\n");
        return 0;
    }
}

// 反余割函数（通过反正弦计算）
double arccsc(double a) {
    if (fabs(a) >= 1) {
        return asin(1 / a);
    } else {
        printf("输入错误，绝对值需大于等于 1\n");
        return 0;
    }
}

// 双曲正弦函数
double sinhFunction(double a) {
    return sinh(a);
}

// 双曲余弦函数
double coshFunction(double a) {
    return cosh(a);
}

// 双曲正切函数
double tanhFunction(double a) {
    return tanh(a);
}

// 主函数
int main() {
    double angleInDegree = 30.0;
    double angleInRadian = angleInDegree * M_PI / 180.0;

    printf("正弦值: %.2f\n", sine(angleInRadian));
    printf("余弦值: %.2f\n", cosine(angleInRadian));
    printf("正切值: %.2f\n", tangent(angleInRadian));
    printf("余切值: %.2f\n", cotangent(angleInRadian));
    printf("正割值: %.2f\n", secant(angleInRadian));
    printf("余割值: %.2f\n", cosecant(angleInRadian));

    return 0;
}

/*
在上述代码中，我们使用了 C 语言标准库中的 tan、cos 和 sin 函数来实现相应的计算。但需要注意的是，三角函数的输入参数通常是以弧度为单位的。如果您的输入 a 是以角度为单位，需要先进行转换，例如：
double angleInDegree = 45.0;  // 角度值
double angleInRadian = angleInDegree * M_PI / 180.0;  // 转换为弧度
*/