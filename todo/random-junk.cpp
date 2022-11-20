bool existsInArray(const char arr[], int len, char element)
{
    bool inArray = false;
    
    for (int i = 0; i < len; i++)
    {
        if (element == arr[i])
        {
            inArray = true;
            break;
        }
    }
    
    return inArray;
}

void alphabetArray()
{
    char alphabet[26];

}

void distinctChars(string str)
{
    int strLen;
    strLen = str.length();
    char arr[50];
    int arrLen = 1;
    
    for (int i = 0; i < strLen; i++)
    {
        if (existsInArray(arr, arrLen, str[i]) == false)
        {
            arr[arrLen - 1] = str[i];
            arrLen++;
        }
    }

    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << " ";
    }
}