while True:
    try:
      target = int(input())
      line = input()
      nums = list(map(int, line.split(' ')))
      hashmap = {}
      for i, num in enumerate(nums):
        complement = target - num
        if complement in hashmap:
          print([hashmap[complement], i])
        hashmap[num] = i

    except EOFError:
      # Handle EOFError when no more input is available
      break   
    except ValueError:
      # This will catch Ctrl+C and exit the loop
      print("\nExiting...")
      break
