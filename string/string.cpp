// © 2023 C++ 從入門到入土

#include <fstream>
#include <iostream>
#include <string>

#pragma execution_character_set("utf-8")

//int main()
//{
//    system("chcp 65001 >nul");
//
//    std::cout << "我有一隻貓咪，叫六六" << std::endl;
//
//    std::string s = "我有一隻貓咪，叫六六";
//    std::cout << s << std::endl;
//    std::cout << s.size() << std::endl;
//
//    return 0;
//}

//int main()
//{
//    std::cout << "我有一隻貓咪，叫六六" << std::endl;
//
//    std::string s = "我有一隻貓咪，叫六六";
//    std::cout << s << std::endl;
//    std::cout << s.size() << std::endl;
//}

//int main()
//{
//    system("chcp");
//    std::cout << "我有一隻貓咪，叫六六" << std::endl;
//
//    std::string s = "我有一隻貓咪，叫六六";
//    std::cout << s << std::endl;
//    std::cout << s.size() << std::endl;
//}

int main()
{
    system("chcp 65001 >nul");
    std::u8string s = u8"我有一隻貓咪，叫六六";
    std::basic_ofstream<char8_t> out(stdout);

    out << s;

    return 0;
}

//int main()
//{
//    std::string s("我有一隻貓咪，叫六六");
//    std::cout << s.size();
//    std::cout << s;
//    std::string f("六六");
//    auto pos = s.find(f);
//    std::cout << s.replace(pos, f.size(), "小克");
//}

//int main()
//{
//    std::cout << "Hello World!\n";
//
//    char s[] = "Hello, C++!";
//    std::cout << s << std::endl;
//
//    s[1] = 'a';
//    std::cout << s << std::endl;
//
//    std::string s2 = "Hello";
//    s2 = "C/C++";
//    auto sub = s2.replace(2, 3, "C#");
//    std::cout << s2 << std::endl;
//
//    auto ss = { "a", "bb", "ccc", "aa" };
//    const char* ss2[] = { "a", "bb", "ccc", "aa" };
//    char ss3[][4] = {"a", "bb", "ccc", "aa"};
//    for (auto s : ss)
//    {
//        std::cout << s << std::endl;
//    }
//
//    std::string u = "我好棒";
//    std::cout << u << std::endl;
//
//    return 0;
//}
