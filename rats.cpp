uint64_t StringData = read<uint64_t>(YourFStringPtr); //FString -> Data (0x0)
uint32_t StringLength = read<uint32_t>(YourFStringPtr + 0x8); //FString -> Count (0x8)
wchar_t* OutString = new wchar_t[StringLength + 1];
read_memory(StringData, OutString, StringLength * sizeof(wchar_t));
