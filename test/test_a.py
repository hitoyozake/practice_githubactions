from main.hoge import Add

def test_add_1():
    assert Add(1, 2).get_result() == 3

def test_add_2():
    assert Add(0, 0).get_result() == 0


