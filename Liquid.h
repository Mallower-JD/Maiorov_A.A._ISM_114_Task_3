#pragma once
#include <string>
#include <iostream>

/**
 * @brief Класс жидкость
 * 
 */

class liquid
{
private:
    /**
     * @brief переменная Имя
     * 
     */
    const std::string name;

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
    liquid(const std::string name, double density);

    /**
     * @brief Назначение Имени
     * 
     * @param name 
     */
    void set_name (const std::string name);

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

    /**
     * @brief Назначение Плотности
     * 
     * @param density 
     */
    void set_density (double density);

    /**
     * @brief переназначение плотности (создание нового исход. знач)
     * 
     * @param density 
     */
    void new_density (double density);

    /**
     * @brief Добавление плотности
     * 
     * @param density 
     * @param positive 
     */
    void pos_density (double density, double positive);

    /**
     * @brief Вычитание плотности
     * 
     * @param density 
     * @param negative 
     */
    void neg_density (double density, double negative);

};
    class alcohol : public liquid 
    {
    private:
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

        /**
         * @brief Назначение Крепости
         * 
         * @param strength 
         */
        void Set_strength(double strength);
        
        /**
         * @brief переназначение Крепости (создание нового исход. знач)
         * 
         * @param strength 
         */
        void new_strength (double strength);

        /**
         * @brief Добавление крепости
         * 
         * @param strength 
         * @param positive2 
         */
        void pos_strength (double strength, double positive2);

        /**
         * @brief Вычитание крепости
         * 
         * @param strength 
         * @param negative2
         */
        void neg_strength (double strength, double negative2);
        
        
        /**
         * @brief Construct a new liquid object
         * 
         * @param name 
         * @param density 
         * @param strength 
         */
        alcohol(const std::string name, double density, double strength) : base(name, density, strength);
        
        std::string liquid::ToString() const;
    };