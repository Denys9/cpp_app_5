
    std::reverse(std::begin(arr), std::end(arr));

    for (int& i : arr) {
        std::cout << i << ' ';
    }

    return 0;
}