#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

template <typename TType>
class SampleClass
{
private:
    char line_character;

public:
    SampleClass(char character) : line_character(character) {}
    void print_line(int);
};

#endif