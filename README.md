# Command Line Todo Utility

A simple command line todo utility written in C++.

## Usage

```bash
./todo - to list tasks
./todo help - to display this help message
./todo add <item> - to add a new task
./todo completed <line> - to mark a task as completed
```

## Getting Started

1. Clone the repository:

    ```bash
    git clone https://github.com/yourusername/todo-cli.git
    ```

2. Navigate to the project directory:

    ```bash
    cd todo-cli
    ```

3. Compile the C++ code:

    ```bash
    g++ -o todo main.cpp
    ```

4. Run the executable:

    ```bash
    ./todo
    ```

## Examples

### List Tasks

```bash
./todo
```

This command will display the list of tasks.

### Display Help

```bash
./todo help
```

This command will display the usage guide.

### Add a New Task

```bash
./todo add "Buy groceries"
```

This command will add a new task to the todo list.

### Mark Task as Completed

```bash
./todo completed 3
```

This command will mark the task at line 3 as completed.

## Contributing

If you would like to contribute to the development of this todo utility, feel free to submit a pull request. Bug reports and feature requests are also welcome.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
