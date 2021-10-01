#pragma once
#include <string>
#include <iostream>

/**
 * @brief Класс жидкость
 * 
 */

class liquid
{
    protected:
        /**
         * @brief переменная Имя
         * 
         */
        std::string name;

        /**
         * @brief переменная Плотность
         * 
         */
        double density;

    public:
        /**
         * @brief Конструктор копирования
         */
        liquid(const liquid& other);

        /**
         * @brief Деструктор по умолчанию
         */
        ~liquid() = default;

        /**
         * @brief Конструктор нового объекта Liquid
         * 
         * @param name 
         * @param density 
         */
        liquid(const std::string name, const double density);

        /**
         * @brief Назначение Имени
         * 
         * @param name 
         */
        void set_name (const std::string name);
        
        /**
         * @brief Назначение Плотности
         * 
         * @param density 
         */
        void set_density (const double density);

        /**
         * @brief Get the name object
         * 
         * @return std::string 
         */
        std::string get_name() const;

        /**
         * @brief Get the density object
         * 
         * @return double 
         */
        double get_density() const;
};

class alcohol : public liquid 
{
    private:
        /**
         * @brief Переменная "Крепость"
         * 
         */
        double strength;

    public:

        /**
         * @brief Конструктор копирования
         */
        alcohol(const alcohol& other);

        /**
         * @brief Деструктор по умолчанию
         */
        ~alcohol() = default;
        
        alcohol(const std::string name, const double density, const double strength);

        /**
         * @brief Назначение Крепости
         * 
         * @param strength 
         */
        void set_strength(const double strength);
        /**
         * @brief Get the strength object
         * 
         * @return double 
         */
        double get_strength() const;

        std::string to_string() const;
};

std::ostream& operator << (std::ostream& out, const alcohol& alcohol);